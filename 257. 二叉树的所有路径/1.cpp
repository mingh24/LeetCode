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
        if (!root) {
            return answer;
        }

        dfs(root, "");

        return answer;
    }

private:
    vector<string> answer;

    void dfs(TreeNode *node, string path) {
        path += to_string(node->val);

        if (!node->left && !node->right) {
            answer.emplace_back(path);
        }

        if (node->left) {
            dfs(node->left, path + "->");
        }

        if (node->right) {
            dfs(node->right, path + "->");
        }
    }
};