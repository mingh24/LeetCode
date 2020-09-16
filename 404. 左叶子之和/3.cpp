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
    int sumOfLeftLeaves(TreeNode *root) {
        int answer = 0;

        if (!root) {
            return answer;
        }

        queue<pair<TreeNode *, bool>> q;
        q.emplace(root, false);

        while (!q.empty()) {
            TreeNode *node = q.front().first;
            bool is_left = q.front().second;
            q.pop();

            if (!node->left && !node->right && is_left) {
                answer += node->val;
            }

            if (node->left) {
                q.emplace(node->left, true);
            }

            if (node->right) {
                q.emplace(node->right, false);
            }
        }

        return answer;
    }
};