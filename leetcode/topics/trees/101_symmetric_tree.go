package trees

func isSymmetric(root *TreeNode) bool {
	if root == nil {
		return true
	}
	return isMirror(root.Left, root.Right)
}

func isMirror(left, right *TreeNode) bool {
	if left == nil && right == nil {
		return true
	}
	if (left == nil || right == nil) || left.Val != right.Val {
		return false
	}
	return isMirror(left.Left, right.Right) && isMirror(left.Right, right.Left)
}

// func isSymmetric(root *TreeNode) bool {
// 	var queue []*TreeNode

// 	queue = append(queue, root)
// 	queue = append(queue, root)

// 	for len(queue) > 0 {
// 		left := queue[0]
// 		right := queue[1]
// 		queue = queue[2:]
// 		if left == nil && right == nil {
// 			continue
// 		}
// 		if left == nil || right == nil {
// 			return false
// 		}
// 		if left.Val != right.Val {
// 			return false
// 		}
// 		queue = append(queue, left.Left)
// 		queue = append(queue, right.Right)
// 		queue = append(queue, left.Right)
// 		queue = append(queue, right.Left)
// 	}
// 	return true
// }

// func isSymmetric(root *TreeNode) bool {
// 	queue := list.New()
// 	queue.PushBack(root)
// 	queue.PushBack(root)

// 	for queue.Len() > 0 {
// 		left := queue.Front()
// 		queue.Remove(left)
// 		right := queue.Front()
// 		queue.Remove(right)

// 		if left == nil && right == nil {
// 			continue
// 		}
// 		if left == nil || right == nil {
// 			return false
// 		}
// 		if left.Val != right.Val {
// 			return false
// 		}
// 		queue.PushBack(left.Left)
// 		queue.PushBack(right.Right)
// 		queue.PushBack(left.Right)
// 		queue.PushBack(right.Left)
// 	}
// 	return true
// }
