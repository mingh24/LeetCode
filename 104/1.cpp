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
    void getDepths(TreeNode *node, vector<int> &depths, int count) {
        if (node != NULL) {
            ++count;
            getDepths(node->left, depths, count);
            getDepths(node->right, depths, count);
        } else {
            depths.push_back(count);
        }
    }

    int maxDepth(TreeNode *root) {
        vector<int> depths;
        getDepths(root, depths, 0);

        auto max = max_element(depths.begin(), depths.end());
        return *max;
    }
};