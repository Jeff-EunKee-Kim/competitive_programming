package arrays

func reverseMatrix(matrix [][]int) {
	start := 0
	end := len(matrix) - 1
	for start < end {
		matrix[start], matrix[end] = matrix[end], matrix[start]
		start++
		end--
	}
}

func rotateImage(matrix [][]int) {
	if len(matrix) == 0 || len(matrix[0]) == 0 {
		return
	}
	reverseMatrix(matrix)

	for i := 0; i < len(matrix); i++ {
		for j := i + 1; j < len(matrix[0]); j++ {
			matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
		}
	}
	return
}
