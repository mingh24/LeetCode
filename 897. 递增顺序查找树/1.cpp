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
    TreeNode *increasingBST(TreeNode *root) {
        if (!root) {
            return nullptr;
        }

        queue<TreeNode *> q;
        dfs(root, q);
        TreeNode *head = q.front();
        q.pop();
        TreeNode *node = head;

        while (!q.empty()) {
            node->right = q.front();
            q.pop();
            node = node->right;
        }

        return head;
    }

private:
    void dfs(TreeNode *root, queue<TreeNode *> &q) {
        if (!root) {
            return;
        }

        dfs(root->left, q);
        root->left = nullptr;
        q.emplace(root);
        dfs(root->right, q);
        root->right = nullptr;
    }
};