package listnode

func reverseList(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}

	//     var prev, next *ListNode
	//     curr := head
	//     for curr != nil {
	//         next = curr.Next
	//         curr.Next = prev
	//         prev = curr
	//         curr = next
	//     }
	//     return prev

	newHead := reverseList(head.Next)
	head.Next.Next = head
	head.Next = nil

	return newHead
}
