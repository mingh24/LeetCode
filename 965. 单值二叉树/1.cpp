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
    bool isUnivalTree(TreeNode *root) {
        if (!root) {
            return true;
        }

        return dfs(root, root->val);
    }

private:
    bool dfs(TreeNode *root, int val) {
        if (!root) {
            return true;
        }

        return root->val == val && dfs(root->left, root->val) && dfs(root->right, root->val);
    }
};