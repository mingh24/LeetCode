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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            inorder_map[inorder[i]] = i;
        }

        return helper(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }

    TreeNode *helper(vector<int> &preorder, vector<int> &inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right) {
        if (preorder_left > preorder_right)
            return NULL;

        int preorder_root = preorder_left;
        int inorder_root = inorder_map[preorder[preorder_root]];
        TreeNode *root = new TreeNode(preorder[preorder_root]);
        int left_subtree_size = inorder_root - inorder_left;

        root->left = helper(preorder, inorder, preorder_left + 1, preorder_left + left_subtree_size, inorder_left, inorder_root - 1);
        root->right = helper(preorder, inorder, preorder_left + left_subtree_size + 1, preorder_right, inorder_root + 1, inorder_right);

        return root;
    }

private:
    unordered_map<int, int> inorder_map;
};