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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> answer;

        if (!root) {
            return answer;
        }

        stack<TreeNode *> s;
        s.emplace(root);

        while (!s.empty()) {
            TreeNode *node = s.top();
            s.pop();

            if (node) {
                if (node->right) {
                    s.emplace(node->right);
                }

                if (node->left) {
                    s.emplace(node->left);
                }

                s.emplace(node);
                s.emplace(nullptr);
            } else {
                answer.emplace_back(s.top()->val);
                s.pop();
            }
        }

        return answer;
    }
};