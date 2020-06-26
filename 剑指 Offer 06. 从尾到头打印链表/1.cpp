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

        while (head) {
            answer.emplace_back(head->val);
            head = head->next;
        }

        for (int i = 0; i < answer.size() / 2; i++) {
            int temp = answer[i];
            answer[i] = answer[answer.size() - 1 - i];
            answer[answer.size() - 1 - i] = temp;
        }

        return answer;
    }
};