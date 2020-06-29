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
    ListNode *deleteNode(ListNode *head, int val) {
        if (!head) {
            return NULL;
        }

        if (head->val == val) {
            return head->next;
        }

        ListNode *node = head;

        while (node->next) {
            if (node->next->val == val) {
                node->next = node->next->next;
                break;
            } else {
                node = node->next;
            }
        }

        return head;
    }
};