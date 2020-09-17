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
    ListNode *removeDuplicateNodes(ListNode *head) {
        unordered_set<int> val_set;
        ListNode *node = head;
        
        while (node && node->next) {
            val_set.emplace(node->val);

            while (node->next && val_set.find(node->next->val) != val_set.end()) {
                node->next = node->next->next;
            }

            node = node->next;
        }

        return head;
    }
};