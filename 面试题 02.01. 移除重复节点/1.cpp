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
        if (!head) {
            return NULL;
        }

        int num_recoder[20001] = {0};
        ListNode *slow = head;
        ListNode *fast = head->next;
        num_recoder[slow->val] = 1;

        while (fast) {
            if (num_recoder[fast->val] == 0) {
                num_recoder[fast->val]++;
                slow = slow->next;
                fast = fast->next;
            } else {
                num_recoder[fast->val]++;
                fast = fast->next;
                slow->next = fast;
            }
        }

        return head;
    }
};