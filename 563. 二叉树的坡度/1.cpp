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
    int findTilt(TreeNode *root) {
        dfs(root);

        return answer;
    }

private:
    int answer = 0;

    int dfs(TreeNode *node) {
        if (!node) {
            return 0;
        }

        int left = dfs(node->left);
        int right = dfs(node->right);
        answer += abs(left - right);

        return node->val + left + right;
    }
};