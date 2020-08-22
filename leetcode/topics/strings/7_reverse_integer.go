package strings

import "math"

func reverse(x int) int {
	num := 0
	neg := false
	if x < 0 {
		neg = true
		x *= -1
	}
	for x > 0 {
		num *= 10
		num += x % 10
		x /= 10
		if num >= math.MaxInt32 {
			return 0
		}
	}
	if neg {
		num *= -1
	}
	return num
}
