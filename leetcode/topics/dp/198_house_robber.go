package dp

func rob(nums []int) int {
	if len(nums) == 0 {
		return 0
	}
	if len(nums) == 1 {
		return nums[0]
	}

	// dp := make([]int, len(nums)+1)
	// dp[0] = 0
	// dp[1] = nums[0]
	// for i := 2; i <= len(nums); i++ {
	// 	dp[i] = max(dp[i-1], dp[i-2]+nums[i-1])
	// }

	first, second := 0, nums[0]
	var next int
	for i := 2; i <= len(nums); i++ {
		next = max(second, first+nums[i-1])
		first, second = second, next
	}
	return next
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
