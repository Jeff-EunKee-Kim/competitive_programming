package strings

func isAnagram(s string, t string) bool {
	sLen := len(s)
	tLen := len(t)
	if sLen != tLen {
		return false
	}
	counts := make([]int, 26)
	for _, c := range s {
		counts[c-'a']++
	}
	for _, c := range t {
		counts[c-'a']--
		if counts[c-'a'] < 0 {
			return false
		}
	}
	return true
}
