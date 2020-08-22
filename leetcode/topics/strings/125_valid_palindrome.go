package strings

import "strings"

func isPalindrome(s string) bool {
	if len(s) == 0 || len(s) == 1 {
		return true
	}
	s = strings.ToLower(s)
	i, j := 0, len(s)-1
	for i <= j {
		for i < j && !isAlphanumeric(s[i]) {
			i++
		}
		for i < j && !isAlphanumeric(s[j]) {
			j--
		}
		if s[i] != s[j] {
			return false
		}
		i++
		j--
	}
	return true

}

func isAlphanumeric(a byte) bool {
	return (a >= 'a' && a <= 'z') || (a >= '0' && a <= '9')
}
