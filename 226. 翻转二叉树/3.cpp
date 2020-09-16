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
    TreeNode *invertTree(TreeNode *root) {
        if (!root) {
            return root;
        }

        queue<TreeNode *> q;
        q.emplace(root);

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                TreeNode *node = q.front();
                q.pop();
                TreeNode *temp = node->left;
                node->left = node->right;
                node->right = temp;

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }
        }

        return root;
    }
};