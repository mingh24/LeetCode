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
        if (!head || !head->next) {
            return head;
        }

        if (head->next->val == head->val) {
            while (head->next && head->next->val == head->val) {
                head->next = head->next->next;
            }

            head = deleteDuplicates(head->next);
        } else {
            head->next = deleteDuplicates(head->next);
        }

        return head;
    }
};