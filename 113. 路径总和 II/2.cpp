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
        vector<vector<int>> answer;
        vector<int> path;
        dfs(root, sum, answer, path);

        return answer;
    }

private:
    void dfs(TreeNode *root, int sum, vector<vector<int>> &answer, vector<int> &path) {
        if (!root) {
            return;
        }

        path.emplace_back(root->val);
        sum -= root->val;

        if (sum == 0 && !root->left && !root->right) {
            answer.emplace_back(path);
            path.pop_back();
            return;
        }

        if (root->left) {
            dfs(root->left, sum, answer, path);
        }

        if (root->right) {
            dfs(root->right, sum, answer, path);
        }

        path.pop_back();
    }
};