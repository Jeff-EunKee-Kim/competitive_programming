package strings

func reverseString(s []byte) {
	length := len(s)
	if length == 0 || length == 1 {
		return
	}
	for i := 0; i < length/2; i++ {
		s[i], s[length-1-i] = s[length-1-i], s[i]
	}
	return
}
