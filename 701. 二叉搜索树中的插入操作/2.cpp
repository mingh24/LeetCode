/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        if (!root) {
            return new TreeNode(val);
        }

        TreeNode *current = root;
        TreeNode *previous = current;

        while (current) {
            previous = current;

            if (val < current->val) {
                current = current->left;
            } else if (val > current->val) {
                current = current->right;
            }
        }

        if (val < previous->val) {
            previous->left = new TreeNode(val);
        } else if (val > previous->val) {
            previous->right = new TreeNode(val);
        }

        return root;
    }
};