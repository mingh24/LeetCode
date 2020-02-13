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
    TreeNode *helper(vector<int> &nums, int left, int right) {
        if (left > right)
            return NULL;

        int middle = left + ((right - left) >> 1);
        TreeNode *root = new TreeNode(nums[middle]);
        root->left = helper(nums, left, middle - 1);
        root->right = helper(nums, middle + 1, right);

        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};