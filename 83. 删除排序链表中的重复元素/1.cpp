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
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head) {
            return nullptr;
        }

        ListNode *previous = head;
        ListNode *current = previous->next;

        while (current) {
            if (current->val != previous->val) {
                previous = previous->next;
                current = current->next;
            } else {
                previous->next = current->next;
                current = previous->next;
            }
        }

        return head;
    }
};