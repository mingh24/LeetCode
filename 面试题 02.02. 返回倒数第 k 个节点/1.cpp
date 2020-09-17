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
    int kthToLast(ListNode *head, int k) {
        ListNode *p1 = head;
        ListNode *p2 = head;

        while (k--) {
            p1 = p1->next;
        }

        while (p1) {
            p1 = p1->next;
            p2 = p2->next;
        }

        return p2->val;
    }
};