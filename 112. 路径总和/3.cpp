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
    bool hasPathSum(TreeNode *root, int sum) {
        if (!root) {
            return false;
        }

        queue<pair<TreeNode *, int>> q;
        q.emplace(root, root->val);

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                TreeNode *node = q.front().first;
                int current_sum = q.front().second;
                q.pop();

                if (!node->left && !node->right && current_sum == sum) {
                    return true;
                }

                if (node->left) {
                    q.emplace(node->left, current_sum + node->left->val);
                }

                if (node->right) {
                    q.emplace(node->right, current_sum + node->right->val);
                }
            }
        }

        return false;
    }
};