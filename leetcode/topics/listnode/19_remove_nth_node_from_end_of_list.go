package listnode

func removeNthFromEnd(head *ListNode, n int) *ListNode {

	count := 0
	dummyHead := head
	frontRunner := head
	for count < n {
		frontRunner = frontRunner.Next
		count++
	}
	if frontRunner == nil {
		return head.Next
	}

	for frontRunner.Next != nil {
		frontRunner = frontRunner.Next
		head = head.Next
	}
	head.Next = head.Next.Next

	return dummyHead
}
