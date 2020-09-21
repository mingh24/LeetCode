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
    TreeNode *convertBST(TreeNode *root) {
        dfs(root);

        return root;
    }

private:
    int carry = 0;

    void dfs(TreeNode *root) {
        if (!root) {
            return;
        }

        dfs(root->right);
        root->val += carry;
        carry = root->val;
        dfs(root->left);
    }
};