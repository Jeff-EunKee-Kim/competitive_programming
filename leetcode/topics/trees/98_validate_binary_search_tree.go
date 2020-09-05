package trees

func isValidBST(root *TreeNode) bool {
	return helper(root, nil, nil)
}

func helper(node, lowerLimit, upperLimit *TreeNode) bool {
	if node == nil {
		return true
	}
	if lowerLimit != nil && node.Val <= lowerLimit.Val {
		return false
	}
	if upperLimit != nil && node.Val >= upperLimit.Val {
		return false
	}
	return helper(node.Left, lowerLimit, node) && helper(node.Right, node, upperLimit)
}
