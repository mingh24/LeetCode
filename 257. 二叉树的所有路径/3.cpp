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

        queue<TreeNode *> node_queue;
        node_queue.emplace(root);
        queue<string> path_queue;
        path_queue.emplace(to_string(root->val));

        while (!node_queue.empty()) {
            TreeNode *node = node_queue.front();
            node_queue.pop();
            string path = path_queue.front();
            path_queue.pop();

            if (!node->left && !node->right) {
                answer.emplace_back(path);
            }

            if (node->left) {
                node_queue.emplace(node->left);
                path_queue.emplace(path + "->" + to_string(node->left->val));
            }

            if (node->right) {
                node_queue.emplace(node->right);
                path_queue.emplace(path + "->" + to_string(node->right->val));
            }
        }

        return answer;
    }
};