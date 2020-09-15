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

        if (!root) {
            return answer;
        }

        stack<Node *> s;
        s.emplace(root);

        while (!s.empty()) {
            Node *node = s.top();
            s.pop();

            if (node) {
                s.emplace(node);
                s.emplace(nullptr);

                for (int i = node->children.size() - 1; i >= 0; i--) {
                    s.emplace(node->children[i]);
                }
            } else {
                answer.emplace_back(s.top()->val);
                s.pop();
            }
        }

        return answer;
    }
};