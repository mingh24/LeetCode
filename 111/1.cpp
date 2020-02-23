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
    int minDepth(TreeNode *root) {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 1;

        int minValue = INT_MAX;
        if (root->left != NULL)
            minValue = min(minDepth(root->left), minValue);
        if (root->right != NULL)
            minValue = min(minDepth(root->right), minValue);

        return 1 + minValue;
    }
};