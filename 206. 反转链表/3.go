/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
	return reverse(nil, head)
}

func reverse(previous, current *ListNode) *ListNode {
	if current == nil {
		return previous
	}

	tmp := current.Next
	current.Next = previous
	return reverse(current, tmp)
}