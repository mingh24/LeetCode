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
    int getHeight(TreeNode *node) {
        if (node == NULL)
            return -1;
        return 1 + max(getHeight(node->left), getHeight(node->right));
    }

    bool isBalanced(TreeNode *root) {
        if (root == NULL)
            return true;

        if (abs(getHeight(root->left) - getHeight(root->right)) > 1)
            return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};