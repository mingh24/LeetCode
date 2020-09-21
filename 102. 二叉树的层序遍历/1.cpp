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
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> answer;

        if (!root) {
            return answer;
        }

        queue<TreeNode *> q;
        q.emplace(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> layer(size);

            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();
                layer[i] = node->val;

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }

            answer.emplace_back(layer);
        }

        return answer;
    }
};