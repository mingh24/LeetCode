/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node *root) {
        vector<int> answer;

        if (!root)
            return answer;

        dfs(root, answer);

        answer.emplace_back(root->val);

        return answer;
    }

    void dfs(Node *node, vector<int> &answer) {
        if (!node)
            return;

        for (Node *n : node->children) {
            dfs(n, answer);
            answer.emplace_back(n->val);
        }
    }
};