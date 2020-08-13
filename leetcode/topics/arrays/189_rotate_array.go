func rotate(nums []int, k int) {
	shift := k % len(nums)
	reverse(nums)
	reverse(nums[0:shift])
	reverse(nums[shift:len(nums)])
}

func reverse(num []int) {
	length := len(num)
	for i := 0; i < length/2; i++ {
		temp := num[i]
		num[i] = num[length-i-1]
		num[length-i-1] = temp
	}
}