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
    int sumNumbers(TreeNode *root) {
        return dfs(root, 0);
    }

private:
    int dfs(TreeNode *root, int previous_sum) {
        if (!root) {
            return 0;
        }

        int sum = previous_sum * 10 + root->val;

        if (!root->left && !root->right) {
            return sum;
        } else {
            return dfs(root->left, sum) + dfs(root->right, sum);
        }
    }
};