package strings

func longestCommonPrefix(strs []string) string {
	if len(strs) == 0 {
		return ""
	}
	if len(strs) == 1 {
		return strs[0]
	}
	commonIdx := 0

	for i := 0; i < len(strs[0]); i++ {
		isCommon := true
		curr := strs[0][i]
		for j := 0; j < len(strs); j++ {
			if i+1 > len(strs[j]) {
				isCommon = false
				break
			}
			if curr != strs[j][i] {
				isCommon = false
				break
			}
		}
		if isCommon {
			commonIdx++
		} else {
			break
		}
	}
	return strs[0][:commonIdx]
}
