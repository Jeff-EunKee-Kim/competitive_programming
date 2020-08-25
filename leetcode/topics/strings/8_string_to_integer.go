package strings

import (
	"math"
	"strings"
)

func myAtoi(str string) int {
	str = strings.TrimSpace(str)
	if str == "" {
		return 0
	}

	sign := 1
	if str[0] == '+' {
		str = str[1:]

	} else if str[0] == '-' {

		str = str[1:]
		sign = -1
	} else if str[0] < '0' || str[0] > '9' {

		return 0
	}

	res := 0
	for _, s := range str {
		if isNumber(s) {
			res = res*10 + int(s) - '0'
			if res > math.MaxInt32 {
				if sign == -1 {
					return math.MinInt32
				}
				return math.MaxInt32
			}
		} else {
			break
		}
	}
	return res * sign

}

func isNumber(s rune) bool {
	return s >= '0' && s <= '9'
}
