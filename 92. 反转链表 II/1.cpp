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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *previous = dummy;
        ListNode *current = dummy->next;

        for (int i = 1; i < m; i++) {
            previous = previous->next;
            current = current->next;
        }

        for (int j = m; j < n; j++) {
            ListNode *temp = current->next;
            current->next = temp->next;
            temp->next = previous->next;
            previous->next = temp;
        }

        return dummy->next;
    }
};