/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(list1 *ListNode, list2 *ListNode) *ListNode {
	if list1 == nil {
		return list2
	}

	if list2 == nil {
		return list1
	}

	var p *ListNode

	if list1.Val < list2.Val {
		p = list1
		list1 = list1.Next
	} else {
		p = list2
		list2 = list2.Next
	}

	p.Next = mergeTwoLists(list1, list2)
	return p
}