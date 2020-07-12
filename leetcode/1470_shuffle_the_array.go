func shuffle(nums []int, n int) []int {
	arr := make([]int, len(nums))

	idx := 0
	for i := 0; i < n; i++ {
		arr[idx] = nums[i]
		idx++

		arr[idx] = nums[i+n]
		idx++
	}

	return arr
}