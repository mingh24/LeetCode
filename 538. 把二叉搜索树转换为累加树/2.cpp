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
    TreeNode *convertBST(TreeNode *root) {
        if (!root) {
            return nullptr;
        }

        int carry = 0;
        stack<TreeNode *> s;
        s.emplace(root);

        while (!s.empty()) {
            TreeNode *node = s.top();
            s.pop();

            if (node) {
                if (node->left) {
                    s.emplace(node->left);
                }

                s.emplace(node);
                s.emplace(nullptr);

                if (node->right) {
                    s.emplace(node->right);
                }
            } else {
                s.top()->val += carry;
                carry = s.top()->val;
                s.pop();
            }
        }

        return root;
    }
};