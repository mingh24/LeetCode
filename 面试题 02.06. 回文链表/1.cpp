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
    bool isPalindrome(ListNode *head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        stack<ListNode *> s;

        while (p1) {
            s.emplace(p1);
            p1 = p1->next;
        }

        while (p2) {
            if (p2->val != s.top()->val) {
                return false;
            } else {
                s.pop();
                p2 = p2->next;
            }
        }

        return true;
    }
};