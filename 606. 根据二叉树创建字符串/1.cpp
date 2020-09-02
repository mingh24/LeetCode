/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode *t) {
        if (!t) {
            return "";
        }

        if (!t->left && !t->right) {
            return to_string(t->val);
        }

        string answer = to_string(t->val);

        if (t->left) {
            answer += "(" + tree2str(t->left) + ")";
        } else {
            answer += "()";
        }

        if (t->right) {
            answer += "(" + tree2str(t->right) + ")";
        }

        return answer;
    }
};