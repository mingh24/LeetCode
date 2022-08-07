/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func detectCycle(head *ListNode) *ListNode {
	dupMap := make(map[*ListNode]bool)
	p := head

	for p != nil {
		if dupMap[p] {
			return p
		}

		dupMap[p] = true
		p = p.Next
	}

	return nil
}