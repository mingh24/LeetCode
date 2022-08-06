/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    stack<ListNode*> s;
    ListNode tmp(0, nullptr);
    ListNode* dummy_head = &tmp;
    ListNode* current = dummy_head;
    ListNode* h = head;

    while (h) {
      s.push(h);
      h = h->next;
    }

    while (!s.empty()) {
      current->next = s.top();
      s.pop();
      current = current->next;
      current->next = nullptr;
    }

    return dummy_head->next;
  }
};