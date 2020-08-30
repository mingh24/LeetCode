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
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        vector<vector<int>> answer;

        if (!root) {
            return answer;
        }

        vector<int> layer;
        queue<TreeNode *> q;
        q.emplace(root);

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                TreeNode *node = q.front();
                q.pop();
                layer.emplace_back(node->val);

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }

            answer.emplace_back(layer);
            layer.clear();
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};