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
    vector<int> reversePrint(ListNode *head) {
        vector<int> answer;
        stack<int> s;

        while (head) {
            s.emplace(head->val);
            head = head->next;
        }

        while (!s.empty()) {
            answer.emplace_back(s.top());
            s.pop();
        }

        return answer;
    }
};