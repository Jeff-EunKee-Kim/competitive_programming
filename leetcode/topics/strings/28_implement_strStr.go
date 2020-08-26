package strings

func strStr(haystack string, needle string) int {
	if needle == "" {
		return 0
	}
	lenNeedle := len(needle)
	lenHay := len(haystack)

	for i := 0; i <= lenHay-lenNeedle; i++ {
		if haystack[i:i+lenNeedle] == needle {
			return i
		}
	}
	return -1

}
