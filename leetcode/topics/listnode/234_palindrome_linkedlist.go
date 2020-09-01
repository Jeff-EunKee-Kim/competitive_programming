package listnode

func isPalindrome(head *ListNode) bool {
	if head == nil || head.Next == nil {
		return true
	}
	slow, fast := head, head
	for fast.Next != nil && fast.Next.Next != nil {
		slow = slow.Next
		fast = fast.Next.Next
	}

	var prev *ListNode
	for slow != nil {
		next := slow.Next
		slow.Next = prev
		prev, slow = slow, next
	}

	for head != nil {
		if prev.Val != head.Val {
			return false
		}
		prev, head = prev.Next, head.Next
	}
	return true
}
