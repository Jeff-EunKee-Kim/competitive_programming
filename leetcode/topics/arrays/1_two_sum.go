package arrays

func twoSum(nums []int, target int) []int {
	seen := make(map[int]int)

	for i, num := range nums {
		curr, exist := seen[target-num]
		if exist {
			return []int{i, curr}
		}
		seen[num] = i
	}
	return []int{0.0}
}
