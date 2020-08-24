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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> answer;

        if (!root) {
            return answer;
        }

        stack<TreeNode *> s;
        s.emplace(root);

        while (!s.empty()) {
            TreeNode *node = s.top();
            s.pop();
            answer.emplace_back(node->val);

            if (node->left) {
                s.emplace(node->left);
            }

            if (node->right) {
                s.emplace(node->right);
            }
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};