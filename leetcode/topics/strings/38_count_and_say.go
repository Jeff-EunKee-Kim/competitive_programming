package strings

func countAndSay(n int) string {
	if n == 1 {
		return "1"
	}
	if n == 2 {
		return "11"
	}

	prev := []byte{'1', '1'}

	for i := 2; i < n; i++ {
		curr := []byte{}
		count := 1
		for j := 1; j < len(prev); j++ {
			if prev[j] == prev[j-1] {
				count++
			} else {
				curr = append(curr, byte(count+'0'), prev[j-1])
				count = 1
			}

			if j == len(prev)-1 {
				curr = append(curr, byte(count+'0'), prev[j])
				count = 0
			}
		}
		prev = curr
	}
	return string(prev)
}
