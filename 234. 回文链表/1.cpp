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

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow = reverse(slow);
        ListNode *p = head;

        while (slow) {
            if (p->val != slow->val) {
                return false;
            }

            p = p->next;
            slow = slow->next;
        }

        return true;
    }

private:
    ListNode *reverse(ListNode *head) {
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