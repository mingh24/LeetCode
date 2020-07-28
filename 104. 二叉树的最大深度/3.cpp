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
    int maxDepth(TreeNode *root) {
        if (!root) {
            return 0;
        }

        dfs(root, 0);

        return answer;
    }

    void dfs(TreeNode *node, int level) {
        if (!node) {
            return;
        }

        answer = max(answer, level + 1);

        dfs(node->left, level + 1);
        dfs(node->right, level + 1);
    }

private:
    int answer = 0;
};