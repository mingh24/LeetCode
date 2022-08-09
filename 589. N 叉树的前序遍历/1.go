/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func preorder(root *Node) []int {
	res := make([]int, 0)
	preorderHelper(root, &res)
	return res
}

func preorderHelper(root *Node, res *[]int) {
	if root == nil {
		return
	}

	*res = append(*res, root.Val)

	for _, child := range root.Children {
		preorderHelper(child, res)
	}
}