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
    vector<string> binaryTreePaths(TreeNode *root) {
        if (!root)
            return answer;

        dfs(root, "");
        return answer;
    }

    void dfs(TreeNode *node, string path) {
        if (!node)
            return;

        path += to_string(node->val);

        if (!node->left and !node->right) {
            answer.emplace_back(path);
            return;
        }

        path += "->";

        dfs(node->left, path);
        dfs(node->right, path);
    }

private:
    vector<string> answer;
};