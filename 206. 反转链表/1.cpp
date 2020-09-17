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
    ListNode *reverseList(ListNode *head) {
        ListNode *p1 = nullptr;
        ListNode *p2 = head;

        while (p2) {
            ListNode *temp = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = temp;
        }

        return p1;
    }
};