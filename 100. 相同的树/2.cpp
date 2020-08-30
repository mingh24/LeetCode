/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (!p && !q) {
            return true;
        } else if (!p || !q) {
            return false;
        }

        queue<TreeNode *> queue1, queue2;
        queue1.emplace(p);
        queue2.emplace(q);

        while (!queue1.empty() && !queue2.empty()) {
            TreeNode *node1 = queue1.front();
            queue1.pop();
            TreeNode *node2 = queue2.front();
            queue2.pop();

            if (!node1 && !node2) {
                continue;
            } else if (!node1 || !node2) {
                return false;
            }

            if (node1->val != node2->val) {
                return false;
            }

            queue1.emplace(node1->left);
            queue1.emplace(node1->right);
            queue2.emplace(node2->left);
            queue2.emplace(node2->right);
        }

        return queue1.empty() && queue2.empty();
    }
};