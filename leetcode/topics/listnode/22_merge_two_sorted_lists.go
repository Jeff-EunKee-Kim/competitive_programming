package listnode

func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	dummy := &ListNode{}
	res := dummy

	for l1 != nil && l2 != nil {
		if l1.Val > l2.Val {
			dummy.Next = l2
			l2 = l2.Next
		} else {
			dummy.Next = l1
			l1 = l1.Next
		}
		dummy = dummy.Next
	}
	if l1 != nil {
		for l1 != nil {
			dummy.Next = l1
			dummy = dummy.Next
			l1 = l1.Next
		}
	} else {
		for l2 != nil {
			dummy.Next = l2
			dummy = dummy.Next
			l2 = l2.Next
		}
	}
	return res.Next

}
