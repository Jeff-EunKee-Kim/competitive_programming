package arrays

func intersect(nums1 []int, nums2 []int) []int {
	map1 := make(map[int]int)
	ans := make([]int, 0)
	for _, num := range nums1 {
		map1[num]++
	}
	for _, num := range nums2 {
		if map1[num] > 0 {
			ans = append(ans, num)
			map1[num]--
		}
	}

	return ans
}
