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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> answer;
        dfs(root, answer);

        return answer;
    }

private:
    void dfs(TreeNode *node, vector<int> &answer) {
        if (!node) {
            return;
        }

        dfs(node->left, answer);
        dfs(node->right, answer);
        answer.emplace_back(node->val);
    }
};