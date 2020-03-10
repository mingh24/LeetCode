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
    int maxd = 0;

    int depth(TreeNode *node) {
        if (node == NULL)
            return 0;

        int leftd = depth(node->left);
        int rightd = depth(node->right);
        maxd = max(maxd, leftd + rightd);

        return max(leftd, rightd) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root) {
        depth(root);

        return maxd;
    }
};