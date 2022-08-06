/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
	var (
		previous *ListNode
		current  *ListNode = head
	)

	for current != nil {
		tmp := current.Next
		current.Next = previous
		previous = current
		current = tmp
	}

	return previous
}