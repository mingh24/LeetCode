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

        stack<TreeNode *> s1, s2;
        s1.emplace(p);
        s2.emplace(q);

        while (!s1.empty() && !s2.empty()) {
            TreeNode *node1 = s1.top();
            s1.pop();
            TreeNode *node2 = s2.top();
            s2.pop();

            if (!node1 && !node2) {
                continue;
            } else if (!node1 || !node2) {
                return false;
            }

            if (node1->val != node2->val) {
                return false;
            }

            s1.emplace(node1->right);
            s1.emplace(node1->left);
            s2.emplace(node2->right);
            s2.emplace(node2->left);
        }

        return s1.empty() && s2.empty();
    }
};