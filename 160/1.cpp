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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> nodes;

        while (headA != NULL || headB != NULL) {
            if (headA != NULL)
                if (nodes.find(headA) != nodes.end()) {
                    return headA;
                } else {
                    nodes.insert(headA);
                    headA = headA->next;
                }

            if (headB != NULL)
                if (nodes.find(headB) != nodes.end()) {
                    return headB;
                } else {
                    nodes.insert(headB);
                    headB = headB->next;
                }
        }

        return NULL;
    }
};