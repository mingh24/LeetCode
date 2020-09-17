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
    ListNode *removeDuplicateNodes(ListNode *head) {
        ListNode *node = head;

        while (node) {
            ListNode *cursor = node;

            while (cursor->next) {
                if (cursor->next->val == node->val) {
                    cursor->next = cursor->next->next;
                } else {
                    cursor = cursor->next;
                }
            }

            node = node->next;
        }

        return head;
    }
};