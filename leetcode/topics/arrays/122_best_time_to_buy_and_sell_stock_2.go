package arrays

func maxProfit(prices []int) int {
	total := 0
	if len(prices) == 0 {
		return total
	}
	for i := 0; i < len(prices)-1; i++ {
		if prices[i] < prices[i+1] {
			total += prices[i+1] - prices[i]
		}
	}
	return total
}
