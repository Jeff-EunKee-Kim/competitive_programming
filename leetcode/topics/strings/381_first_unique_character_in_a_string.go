package strings

func firstUniqChar(s string) int {
	seen := make([]int, 26)
	for _, c := range s {
		seen[c-'a']++
	}
	for i, c := range s {
		if seen[c-'a'] == 1 {
			return i
		}
	}
	return -1
}
