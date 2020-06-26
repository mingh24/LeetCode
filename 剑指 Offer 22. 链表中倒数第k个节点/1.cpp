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
    ListNode *getKthFromEnd(ListNode *head, int k) {
        stack<ListNode *> s;

        ListNode *node = head;
        while (node) {
            s.emplace(node);
            node = node->next;
        }

        k--;
        while (k--) {
            s.pop();
        }

        return s.top();
    }
};