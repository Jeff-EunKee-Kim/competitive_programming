package math

func romanToInt(s string) int {
	//     rune, string
	romanMap := map[byte]int{
		'I': 1,
		'V': 5,
		'X': 10,
		'L': 50,
		'C': 100,
		'D': 500,
		'M': 1000,
	}

	sum := 0
	for i := 0; i < len(s); i++ {
		currRoman := romanMap[s[i]]
		if i < len(s)-1 && romanMap[s[i+1]] > currRoman {
			currRoman = romanMap[s[i+1]] - currRoman
			i++
		}
		sum += currRoman
	}
	return sum
}
