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
        vector<int> answer;

        if (!root) {
            return answer;
        }

        dfs(root);

        for (auto iter = occurrence_map.begin(); iter != occurrence_map.end(); iter++) {
            if (answer.empty()) {
                answer.emplace_back(iter->first);
            } else {
                if (iter->second >= occurrence_map[answer[0]]) {
                    if (iter->second > occurrence_map[answer[0]]) {
                        answer.clear();
                    }

                    answer.emplace_back(iter->first);
                }
            }
        }

        return answer;
    }

private:
    unordered_map<int, int> occurrence_map;

    void dfs(TreeNode *root) {
        if (!root) {
            return;
        }

        occurrence_map[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
};