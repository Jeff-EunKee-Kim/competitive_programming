func fib(N int) int {
	switch N {
	case 0:
		return 0
	case 1:
		return 1
	}
	first := 1
	second := 1

	i := 1
	for i < N {
		i++
		first, second = second, first+second
	}
	return first
}