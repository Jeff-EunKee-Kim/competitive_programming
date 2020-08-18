package arrays

func singleNumber(nums []int) int {
	if len(nums) == 1 {
		return nums[0]
	}

	for i := 1; i < len(nums); i++ {
		nums[0] = nums[0] ^ nums[i]
	}
	return nums[0]
}

// func singleNumber(nums []int) int {
// 	numMap := make(map[int]bool)
// 	for _, n := range nums {
// 		if numMap[n] {
// 			delete(numMap, n)
// 		} else {
// 			numMap[n] = true
// 		}
// 	}
// 	for key, _ := range numMap {
// 		return key
// 	}
// 	return -1
// }
