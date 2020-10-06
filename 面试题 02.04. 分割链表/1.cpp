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
        ListNode *previous = head;
        ListNode *current = head;

        while (current) {
            if (current->val < x) {
                int temp = previous->val;
                previous->val = current->val;
                current->val = temp;
                previous = previous->next;
            }

            current = current->next;
        }

        return head;
    }
};