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
        left = head;
        dfs(head);

        return answer;
    }

private:
    bool answer = true;
    ListNode *left;

    void dfs(ListNode *right) {
        if (!right) {
            return;
        }

        dfs(right->next);

        if (right->val != left->val) {
            answer = false;
            return;
        }

        left = left->next;
    }
};