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

        unordered_map<int, int> occurrence_map;
        ListNode *node = head;

        while (node) {
            occurrence_map[node->val]++;
            node = node->next;
        }

        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        node = head;

        while (node) {
            if (occurrence_map[node->val] == 1) {
                p->next = new ListNode(node->val);
                p = p->next;
            }

            node = node->next;
        }

        return dummy->next;
    }
};