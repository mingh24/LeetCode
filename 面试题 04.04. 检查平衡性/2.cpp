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
    bool isBalanced(TreeNode *root) {
        dfs(root);

        return is_balanced;
    }

private:
    bool is_balanced = true;

    int dfs(TreeNode *root) {
        if (!root || !is_balanced) {
            return 0;
        }

        int left = dfs(root->left);
        int right = dfs(root->right);

        if (abs(left - right) > 1) {
            is_balanced = false;
        }

        return max(left, right) + 1;
    }
};