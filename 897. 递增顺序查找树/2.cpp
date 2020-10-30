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
    TreeNode *increasingBST(TreeNode *root) {
        if (!root) {
            return nullptr;
        }

        TreeNode *previous = nullptr;
        dfs(root, previous);

        return previous;
    }

private:
    void dfs(TreeNode *root, TreeNode *&previous) {
        if (!root) {
            return;
        }

        dfs(root->right, previous);
        root->right = previous;
        previous = root;
        dfs(root->left, previous);
        root->left = nullptr;
    }
};