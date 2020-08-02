func runningSum(nums []int) []int {
	if len(nums) <= 0 {
		return nums
	}
	for i := 1; i < len(nums); i++ {
		nums[i] += nums[i-1]
	}

	return nums
}