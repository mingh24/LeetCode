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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        return merge(lists, 0, lists.size() - 1);
    }

    ListNode *merge(vector<ListNode *> &lists, int left, int right) {
        if (left == right)
            return lists[left];

        if (left > right)
            return NULL;

        int middle = left + (right - left) / 2;
        return mergeTwoLists(merge(lists, left, middle), merge(lists, middle + 1, right));
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (!list1) {
            return list2;
        } else if (!list2) {
            return list1;
        } else if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};