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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *resultHead = new ListNode(-1);

        ListNode *cursor = resultHead;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                cursor->next = l1;
                l1 = l1->next;
            } else {
                cursor->next = l2;
                l2 = l2->next;
            }
            cursor = cursor->next;
        }

        if (l1 != NULL)
            cursor->next = l1;
        else
            cursor->next = l2;

        return resultHead->next;
    }
};