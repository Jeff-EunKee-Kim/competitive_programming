package arrays

func checkBox(row, col int, board [][]byte) bool {
	check := make([]int, 10)
	for i := row; i < row+3; i++ {
		for j := col; j < col+3; j++ {
			curr := board[i][j]
			if curr == '.' {
				continue
			}
			if check[curr-'0'] != 0 {
				return false
			}
			check[curr-'0']++
		}
	}
	return true
}

func isValidSudoku(board [][]byte) bool {
	for i := 0; i < 9; i++ {
		checkRow := make([]int, 10)
		checkCol := make([]int, 10)
		for j := 0; j < 9; j++ {
			currRow := board[i][j]
			if currRow != '.' {
				if checkRow[currRow-'0'] != 0 {
					return false
				}
				checkRow[currRow-'0']++
			}

			currCol := board[j][i]
			if currCol != '.' {
				if checkCol[currCol-'0'] != 0 {
					return false
				}
				checkCol[currCol-'0']++
			}

			if i%3 == 0 && j%3 == 0 {
				if !checkBox(i, j, board) {
					return false
				}
			}
		}
	}

	return true
}
