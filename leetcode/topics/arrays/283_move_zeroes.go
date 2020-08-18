package arrays

func moveZeroes(nums []int) {
	if len(nums) == 0 {
		return
	}
	writeIdx := 0
	for i := range nums {
		if nums[i] != 0 {
			nums[writeIdx] = nums[i]
			writeIdx++
		}
	}
	for i := writeIdx; i < len(nums); i++ {
		nums[i] = 0
	}
	return
}
