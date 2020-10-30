package math

func countPrimes(n int) int {
	isPrime := make([]bool, n)
	for i := 2; i < n; i++ {
		isPrime[i] = true
	}

	for i := 2; i*i < n; i++ {
		if isPrime[i] {
			for j := i; j*i < n; j++ {
				isPrime[i*j] = false
			}
		}
	}

	numPrimes := 0
	for i := 2; i < n; i++ {
		if isPrime[i] {
			numPrimes++
		}
	}
	return numPrimes

}
