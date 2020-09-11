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
    int getDecimalValue(ListNode *head) {
        ListNode *node = head;
        int answer = 0;

        while (node) {
            answer <<= 1;
            answer += node->val;
            node = node->next;
        }

        return answer;
    }
};