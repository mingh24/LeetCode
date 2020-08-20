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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> answer;
        stack<TreeNode *> s;
        TreeNode *node = root;

        while (node || !s.empty()) {
            while (node) {
                s.emplace(node);
                node = node->left;
            }

            node = s.top();
            s.pop();
            answer.emplace_back(node->val);
            node = node->right;
        }

        return answer;
    }
};