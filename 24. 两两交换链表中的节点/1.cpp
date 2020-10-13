/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *previous = dummy;
        ListNode *current = previous->next;

        while (current && current->next) {
            previous->next = current->next;
            current->next = previous->next->next;
            previous->next->next = current;
            previous = current;
            current = current->next;
        }

        return dummy->next;
    }
};