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
    int maxDepth(TreeNode *root) {
        if (!root) {
            return 0;
        }

        int answer = 0;
        queue<TreeNode *> q;
        q.emplace(root);

        while (!q.empty()) {
            answer++;
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }
        }

        return answer;
    }
};