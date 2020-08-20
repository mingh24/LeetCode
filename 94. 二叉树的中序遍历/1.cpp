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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> answer;
        helper(answer, root);

        return answer;
    }

private:
    void helper(vector<int> &answer, TreeNode *node) {
        if (!node) {
            return;
        }

        helper(answer, node->left);
        answer.emplace_back(node->val);
        helper(answer, node->right);
    }
};