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

        stack<pair<TreeNode *, int>> s;
        s.emplace(root, root->val);

        while (!s.empty()) {
            TreeNode *node = s.top().first;
            int current_sum = s.top().second;
            s.pop();

            if (!node->left && !node->right && current_sum == sum) {
                return true;
            }

            if (node->left) {
                s.emplace(node->left, current_sum + node->left->val);
            }

            if (node->right) {
                s.emplace(node->right, current_sum + node->right->val);
            }
        }

        return false;
    }
};