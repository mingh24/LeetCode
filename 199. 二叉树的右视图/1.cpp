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
    vector<int> rightSideView(TreeNode *root) {
        vector<int> answer;

        if (!root) {
            return answer;
        }

        queue<TreeNode *> q;
        q.emplace(root);

        while (!q.empty()) {
            answer.emplace_back(q.front()->val);
            int size = q.size();

            while (size--) {
                TreeNode *node = q.front();
                q.pop();

                if (node->right) {
                    q.emplace(node->right);
                }

                if (node->left) {
                    q.emplace(node->left);
                }
            }
        }

        return answer;
    }
};