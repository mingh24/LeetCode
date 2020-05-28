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
        queue<TreeNode *> q;

        if (!root)
            return answer;

        q.emplace(root);

        while (!q.empty()) {
            int size = q.size();
            double sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;

                if (node->left)
                    q.emplace(node->left);

                if (node->right)
                    q.emplace(node->right);
            }
            answer.emplace_back(sum / size);
        }

        return answer;
    }
};