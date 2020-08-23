/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) {
            return nullptr;
        }

        ListNode *node = head;
        unordered_set<ListNode *> node_set;

        while (node) {
            if (node_set.find(node) != node_set.end()) {
                return node;
            } else {
                node_set.emplace(node);
                node = node->next;
            }
        }

        return nullptr;
    }
};