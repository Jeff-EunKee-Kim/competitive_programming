package math

func isPowerOfThree(n int) bool {
	// for n % 3 == 0 {
	//     n /= 3
	//     if n == 0 {
	//         break
	//     }
	// }
	// return n == 1

	return n > 0 && 1162261467%n == 0
}
