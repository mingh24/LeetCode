type Stack[T any] []T

func (s Stack[T]) Len() int {
	return len(s)
}

func (s Stack[T]) Cap() int {
	return cap(s)
}

func (s *Stack[T]) Push(v T) {
	*s = append(*s, v)
}

func (s Stack[T]) Top() (T, error) {
	if s.Len() == 0 {
		var res T
		return res, fmt.Errorf("out of index, length: %d", s.Len())
	}

	return s[s.Len()-1], nil
}

func (s *Stack[T]) Pop() (T, error) {
	if s.Len() == 0 {
		var res T
		return res, fmt.Errorf("out of index, length: %d", s.Len())
	}

	v := (*s)[s.Len()-1]
	*s = (*s)[:s.Len()-1]
	return v, nil
}

func (s *Stack[T]) Empty() bool {
	return s.Len() == 0
}

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
	s := make(Stack[*ListNode], 0)
	dummyHead := &ListNode{}
	current := dummyHead
	h := head

	for h != nil {
		s.Push(h)
		h = h.Next
	}

	for !s.Empty() {
		tmp, err := s.Pop()
		if err != nil {
			return nil
		}

		current.Next = tmp
		current = current.Next
	}

	return dummyHead.Next
}
