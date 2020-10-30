package math

import "strconv"

func fizzBuzz(n int) []string {
	// ans := make([]string,n)
	var ans []string
	i := 1
	for i <= n {
		if i%15 == 0 {
			ans = append(ans, "FizzBuzz")
		} else if i%3 == 0 {
			ans = append(ans, "Fizz")
		} else if i%5 == 0 {
			ans = append(ans, "Buzz")
		} else {
			ans = append(ans, strconv.Itoa(i))
		}
		i++
	}
	return ans
}
