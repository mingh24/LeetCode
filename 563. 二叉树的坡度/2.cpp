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
    int findTilt(TreeNode *root) {
        if (!root) {
            return 0;
        }

        return abs(helper(root->left) - helper(root->right)) + findTilt(root->left) + findTilt(root->right);
    }

private:
    int helper(TreeNode *node) {
        if (!node) {
            return 0;
        }

        return node->val + sum(node->left) + sum(node->right);
    }
};