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
    vector<int> findMode(TreeNode *root) {
        dfs(root);

        return answer;
    }

private:
    vector<int> answer;
    int previous_val = 0;
    int max_occurrence = 0;
    int occurrence = 0;

    void dfs(TreeNode *root) {
        if (!root) {
            return;
        }

        dfs(root->left);

        if (root->val == previous_val) {
            occurrence++;
        } else {
            previous_val = root->val;
            occurrence = 1;
        }

        if (occurrence >= max_occurrence) {
            if (occurrence > max_occurrence) {
                answer.clear();
                max_occurrence = occurrence;
            }

            answer.emplace_back(root->val);
        }

        dfs(root->right);
    }
};