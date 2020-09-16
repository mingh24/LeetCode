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
    int sumOfLeftLeaves(TreeNode *root) {
        if (root) {
            dfs(root, false);
        }

        return answer;
    }

private:
    int answer = 0;

    void dfs(TreeNode *root, bool is_left) {
        if (!root->left && !root->right && is_left) {
            answer += root->val;
        }

        if (root->left) {
            dfs(root->left, true);
        }

        if (root->right) {
            dfs(root->right, false);
        }
    }
};