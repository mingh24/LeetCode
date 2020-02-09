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
    bool isMirror(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL)
            return true;
        else if (p == NULL || q == NULL)
            return false;

        return (p->val == q->val) && isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }

    bool isSymmetric(TreeNode *root) {
        return isMirror(root, root);
    }
};