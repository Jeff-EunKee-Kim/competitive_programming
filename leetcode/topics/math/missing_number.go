package math

func missingNumber(nums []int) int {
	sum := 0
	for _, num := range nums {
		sum += num
	}
	return len(nums)*(len(nums)+1)/2 - sum
}
