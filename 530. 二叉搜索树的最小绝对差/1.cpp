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
    int getMinimumDifference(TreeNode *root) {
        dfs(root);

        return answer;
    }

private:
    int answer = INT_MAX;
    TreeNode *previous;

    void dfs(TreeNode *root) {
        if (!root) {
            return;
        }

        dfs(root->left);

        if (previous) {
            answer = min(answer, abs(previous->val - root->val));
        }

        previous = root;

        dfs(root->right);
    }
};