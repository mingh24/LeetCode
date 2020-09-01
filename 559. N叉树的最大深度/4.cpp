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
        queue<Node *> q;
        q.emplace(root);

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                Node *node = q.front();
                q.pop();

                for (Node *child : node->children) {
                    if (child) {
                        q.emplace(child);
                    }
                }
            }

            answer++;
        }

        return answer;
    }
};