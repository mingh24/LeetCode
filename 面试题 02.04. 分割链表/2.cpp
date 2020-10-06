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
    ListNode *partition(ListNode *head, int x) {
        if (!head) {
            return nullptr;
        }

        ListNode *previous = head;
        ListNode *current = previous->next;

        while (current) {
            if (current->val < x) {
                previous->next = current->next;
                current->next = head;
                head = current;
                current = previous->next;
            } else {
                previous = previous->next;
                current = current->next;
            }
        }

        return head;
    }
};