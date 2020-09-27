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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        TreeNode *answer = root;

        while (true) {
            if (p->val < answer->val && q->val < answer->val) {
                answer = answer->left;
            } else if (p->val > answer->val && q->val > answer->val) {
                answer = answer->right;
            } else {
                break;
            }
        }

        return answer;
    }
};