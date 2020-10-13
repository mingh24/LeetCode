/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {
public:
    Node *treeToDoublyList(Node *root) {
        if (!root) {
            return nullptr;
        }

        vector<Node *> nodes;
        inorder(root, nodes);
        Node *head = nodes[0];
        Node *previous = head;

        for (int i = 1; i < nodes.size(); i++) {
            nodes[i]->left = previous;
            previous->right = nodes[i];
            previous = nodes[i];
        }

        head->left = previous;
        previous->right = head;

        return head;
    }

private:
    void inorder(Node *root, vector<Node *> &nodes) {
        if (!root) {
            return;
        }

        inorder(root->left, nodes);
        nodes.emplace_back(root);
        inorder(root->right, nodes);
    }
};