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
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *p1 = dummy;
        ListNode *p2 = head;

        while (p2 && p2->next) {
            if (p2->next->val == p2->val) {
                while (p2->next && p2->next->val == p2->val) {
                    p2 = p2->next;
                }

                p2 = p2->next;
                p1->next = p2;
            } else {
                p1 = p2;
                p2 = p2->next;
            }
        }

        return dummy->next;
    }
};