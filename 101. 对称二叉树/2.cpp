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
    bool isSymmetric(TreeNode *root) {
        if (!root) {
            return true;
        }

        queue<TreeNode *> q;
        q.emplace(root->left);
        q.emplace(root->right);

        while (!q.empty()) {
            TreeNode *left = q.front();
            q.pop();
            TreeNode *right = q.front();
            q.pop();

            if (!left && !right) {
                continue;
            } else if (!left || !right) {
                return false;
            }

            if (left->val != right->val) {
                return false;
            }

            q.emplace(left->left);
            q.emplace(right->right);
            q.emplace(left->right);
            q.emplace(right->left);
        }

        return true;
    }
};