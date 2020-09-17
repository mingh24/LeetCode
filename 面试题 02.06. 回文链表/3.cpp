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
        if (!head) {
            return true;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverseList(slow->next);

        ListNode *p1 = head;
        ListNode *p2 = slow->next;

        while (p2) {
            if (p1->val != p2->val) {
                return false;
            } else {
                p1 = p1->next;
                p2 = p2->next;
            }
        }

        return true;
    }

private:
    ListNode *reverseList(ListNode *head) {
        ListNode *p1 = nullptr;
        ListNode *p2 = head;

        while (p2) {
            ListNode *temp = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = temp;
        }

        return p1;
    }
};