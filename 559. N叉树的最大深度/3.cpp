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
    int maxDepth(Node *root) {
        if (!root) {
            return 0;
        }

        int answer = 0;
        stack<pair<Node *, int>> s;
        s.emplace(root, 1);

        while (!s.empty()) {
            Node *node = s.top().first;
            int current_depth = s.top().second;
            s.pop();

            for (Node *child : node->children) {
                if (child) {
                    s.emplace(child, current_depth + 1);
                }
            }

            answer = max(answer, current_depth);
        }

        return answer;
    }
};