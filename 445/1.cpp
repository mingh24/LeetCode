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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        stack<int> l1_stack, l2_stack;

        while (l1) {
            l1_stack.push(l1->val);
            l1 = l1->next;
        }

        while (l2) {
            l2_stack.push(l2->val);
            l2 = l2->next;
        }

        ListNode *answer = NULL;
        int carry = 0;
        while (!l1_stack.empty() or !l2_stack.empty() or carry != 0) {
            int a = l1_stack.empty() ? 0 : l1_stack.top();
            int b = l2_stack.empty() ? 0 : l2_stack.top();

            if (!l1_stack.empty())
                l1_stack.pop();

            if (!l2_stack.empty())
                l2_stack.pop();

            int current = a + b + carry;
            carry = current / 10;
            current %= 10;

            ListNode *current_node = new ListNode(current);
            current_node->next = answer;
            answer = current_node;
        }

        return answer;
    }
};