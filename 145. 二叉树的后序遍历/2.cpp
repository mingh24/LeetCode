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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> answer;

        if (!root) {
            return answer;
        }

        stack<TreeNode *> s;
        s.emplace(root);

        while (!s.empty()) {
            TreeNode *node = s.top();
            s.pop();
            answer.emplace_back(node->val);

            if (node->left) {
                s.emplace(node->left);
            }

            if (node->right) {
                s.emplace(node->right);
            }
        }

        my_revere(answer, 0, answer.size());

        return answer;
    }

private:
    void my_revere(vector<int> &answer, int begin, int end) {
        if (begin < 0 || end > answer.size() || begin >= end) {
            return;
        }

        for (int i = begin; i < (begin + end) / 2; i++) {
            answer[i] ^= answer[end - 1 - i + begin];
            answer[end - 1 - i + begin] ^= answer[i];
            answer[i] ^= answer[end - 1 - i + begin];
        }
    }
};