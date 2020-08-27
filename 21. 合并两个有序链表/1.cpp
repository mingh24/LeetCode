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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *node = dummy;

        while (l1 && l2) {
            if (l1->val <= l2->val) {
                node->next = l1;
                l1 = l1->next;
            } else {
                node->next = l2;
                l2 = l2->next;
            }

            node = node->next;
        }

        while (l1) {
            node->next = l1;
            node = node->next;
            l1 = l1->next;
        }

        while (l2) {
            node->next = l2;
            node = node->next;
            l2 = l2->next;
        }

        return dummy->next;
    }
};