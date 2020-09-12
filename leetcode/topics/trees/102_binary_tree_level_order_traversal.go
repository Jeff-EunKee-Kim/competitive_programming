package trees

func levelOrder(root *TreeNode) [][]int {
	var res [][]int
	var q []*TreeNode
	if root == nil {
		return res
	}
	q = append(q, root)
	for len(q) > 0 {
		var levelNodes []int
		levelSize := len(q)
		for i := 0; i < levelSize; i++ {
			currNode := q[0]
			q = q[1:]
			levelNodes = append(levelNodes, currNode.Val)
			if currNode.Left != nil {
				q = append(q, currNode.Left)
			}
			if currNode.Right != nil {
				q = append(q, currNode.Right)
			}
		}
		res = append(res, levelNodes)
	}
	return res
}
