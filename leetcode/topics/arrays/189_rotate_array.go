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
	// for start < end {
	//     nums[start], nums[end] = nums[end], nums[start]
	//     start++
	//     end--
	// }
}

// func rotate(nums []int, k int) {
// 	length := len(nums)
// 	newArr := make([]int, length)
// 	_ = copy(newArr, nums)

// 	shift := k % length
// 	for i := 0; i < shift; i++ {
// 		nums[i] = newArr[length-shift+i]
// 	}
// 	for i := shift; i < length; i++ {
// 		nums[i] = newArr[i-shift]
// 	}
// }