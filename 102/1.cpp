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
        vector<vector<int>> level_order;
        if (!root)
            return level_order;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty()) {
            int current_size = q.size();
            level_order.emplace_back(vector<int>());

            for (int i = 0; i < current_size; i++) {
                auto node = q.front();
                q.pop();
                level_order.back().emplace_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
        }

        return level_order;
    }
};