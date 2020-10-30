package stack

func isValid(s string) bool {
	pairs := map[rune]rune{
		')': '(',
		']': '[',
		'}': '{',
	}

	stack := []rune{}
	for _, c := range s {
		if c == ')' || c == '}' || c == ']' {
			if len(stack) > 0 && pairs[c] == stack[len(stack)-1] {
				stack = stack[:len(stack)-1]
				continue
			} else {
				return false
			}
		} else {
			stack = append(stack, c)
		}
	}

	return len(stack) == 0
}
