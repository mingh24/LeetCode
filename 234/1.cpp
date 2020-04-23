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
        if (!head or !head->next)
            return true;

        ListNode *slow = head, *fast = head;

        while (fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *previous = slow, *current = slow->next;
        while (current) {
            ListNode *next_node = current->next;
            current->next = previous;
            previous = current;
            current = next_node;
        }

        slow->next = NULL;

        while (head and previous) {
            if (head->val != previous->val)
                return false;

            head = head->next;
            previous = previous->next;
        }

        return true;
    }
};