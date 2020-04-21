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
    vector<int> rightSideView(TreeNode *root) {
        vector<int> answer;
        queue<TreeNode *> node_queue;

        if (!root)
            return answer;

        node_queue.emplace(root);

        while (!node_queue.empty()) {
            int size = node_queue.size();
            answer.emplace_back(node_queue.back()->val);

            while (size--) {
                TreeNode *node = node_queue.front();
                node_queue.pop();

                if (node->left)
                    node_queue.emplace(node->left);

                if (node->right)
                    node_queue.emplace(node->right);
            }
        }

        return answer;
    }
};