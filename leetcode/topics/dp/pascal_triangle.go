package dp

func generate(numRows int) [][]int {
	if numRows == 0 {
		return nil
	} else if numRows == 1 {
		return [][]int{{1}}
	}

	pascalTriangle := [][]int{{1}, {1, 1}}
	if numRows == 2 {
		return pascalTriangle
	}

	for i := 2; i < numRows; i++ {
		pascalTriangle = append(pascalTriangle, make([]int, i+1))
		pascalTriangle[i][0] = 1
		pascalTriangle[i][i] = 1
		for j := 1; j < i; j++ {
			pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j]
		}
	}
	return pascalTriangle
}
