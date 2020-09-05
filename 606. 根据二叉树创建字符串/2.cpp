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
    string tree2str(TreeNode *t) {
        if (!t) {
            return "";
        }

        string answer = "";
        stack<TreeNode *> node_stack;
        node_stack.emplace(t);
        unordered_set<TreeNode *> visited_set;

        while (!node_stack.empty()) {
            TreeNode *node = node_stack.top();

            if (visited_set.find(node) != visited_set.end()) {
                answer += ")";
                node_stack.pop();
            } else {
                visited_set.emplace(node);
                answer += "(" + to_string(node->val);

                if (!node->left && node->right) {
                    answer += "()";
                }

                if (node->right) {
                    node_stack.emplace(node->right);
                }

                if (node->left) {
                    node_stack.emplace(node->left);
                }
            }
        }

        return answer.substr(1, answer.size() - 2);
    }
};