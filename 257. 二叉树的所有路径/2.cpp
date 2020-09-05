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
    vector<string> binaryTreePaths(TreeNode *root) {
        vector<string> answer;

        if (!root) {
            return answer;
        }

        stack<TreeNode *> node_stack;
        node_stack.emplace(root);
        stack<string> path_stack;
        path_stack.emplace(to_string(root->val));

        while (!node_stack.empty()) {
            TreeNode *node = node_stack.top();
            node_stack.pop();
            string path = path_stack.top();
            path_stack.pop();

            if (!node->left && !node->right) {
                answer.emplace_back(path);
            }

            if (node->left) {
                node_stack.emplace(node->left);
                path_stack.emplace(path + "->" + to_string(node->left->val));
            }

            if (node->right) {
                node_stack.emplace(node->right);
                path_stack.emplace(path + "->" + to_string(node->right->val));
            }
        }

        return answer;
    }
};