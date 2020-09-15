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
        dfs(answer, root);

        return answer;
    }

private:
    void dfs(vector<int> &answer, Node *root) {
        if (!root) {
            return;
        }

        for (Node *child : root->children) {
            dfs(answer, child);
        }

        answer.emplace_back(root->val);
    }
};