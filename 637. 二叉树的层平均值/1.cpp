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
    vector<double> averageOfLevels(TreeNode *root) {
        vector<double> answer;

        if (!root) {
            return answer;
        }

        queue<TreeNode *> q;
        q.emplace(root);

        int size;
        double sum = 0;

        while (!q.empty()) {
            size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }

            answer.emplace_back(sum / size);
            sum = 0;
        }

        return answer;
    }
};