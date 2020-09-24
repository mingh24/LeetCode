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
    TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2) {
        if (!t1 && !t2) {
            return nullptr;
        } else if (!t1) {
            return t2;
        } else if (!t2) {
            return t1;
        }

        TreeNode *root = new TreeNode(t1->val + t2->val);
        queue<TreeNode *> q1, q2, q;
        q1.emplace(t1);
        q2.emplace(t2);
        q.emplace(root);

        while (!q1.empty() && !q2.empty()) {
            TreeNode *n1 = q1.front();
            q1.pop();
            TreeNode *n2 = q2.front();
            q2.pop();
            TreeNode *n = q.front();
            q.pop();

            if (n1->left && n2->left) {
                q1.emplace(n1->left);
                q2.emplace(n2->left);
                TreeNode *nn = new TreeNode(n1->left->val + n2->left->val);
                n->left = nn;
                q.emplace(nn);
            } else if (n1->left) {
                n->left = n1->left;
            } else if (n2->left) {
                n->left = n2->left;
            }

            if (n1->right && n2->right) {
                q1.emplace(n1->right);
                q2.emplace(n2->right);
                TreeNode *nn = new TreeNode(n1->right->val + n2->right->val);
                n->right = nn;
                q.emplace(nn);
            } else if (n1->right) {
                n->right = n1->right;
            } else if (n2->right) {
                n->right = n2->right;
            }
        }

        return root;
    }
};