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
    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        vector<int> path;
        dfs(root, path, sum);

        return answer;
    }

private:
    vector<vector<int>> answer;

    void dfs(TreeNode *node, vector<int> path, int sum) {
        if (!node) {
            return;
        }

        path.emplace_back(node->val);
        sum -= node->val;

        if (!node->left && !node->right && sum == 0) {
            answer.emplace_back(path);
            return;
        }

        if (node->left) {
            dfs(node->left, path, sum);
        }

        if (node->right) {
            dfs(node->right, path, sum);
        }
    }
};