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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> answer;

        if (!root) {
            return answer;
        }

        stack<TreeNode *> s;
        TreeNode *current = root;
        TreeNode *previous = nullptr;

        while (current || !s.empty()) {
            while (current) {
                s.emplace(current);
                current = current->left;
            }

            current = s.top();

            if (!current->right || current->right == previous) {
                s.pop();
                answer.emplace_back(current->val);
                previous = current;
                current = nullptr;
            } else {
                current = current->right;
            }
        }

        return answer;
    }
};