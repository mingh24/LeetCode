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

        stack<pair<TreeNode *, bool>> s;
        s.emplace(root, false);

        while (!s.empty()) {
            TreeNode *node = s.top().first;
            bool is_left = s.top().second;
            s.pop();

            if (!node->left && !node->right && is_left) {
                answer += node->val;
            }

            if (node->right) {
                s.emplace(node->right, false);
            }

            if (node->left) {
                s.emplace(node->left, true);
            }
        }

        return answer;
    }
};