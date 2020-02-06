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
        if (head != NULL) {
            ListNode *currentNode = head->next;
            ListNode *previousNode = head;

            while (currentNode != NULL) {
                if (currentNode->val == previousNode->val) {
                    previousNode->next = currentNode->next;
                    delete currentNode;
                    currentNode = previousNode->next;
                } else {
                    previousNode = currentNode;
                    currentNode = currentNode->next;
                }
            }
        }

        return head;
    }
};