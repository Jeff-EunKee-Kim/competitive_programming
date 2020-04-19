#include <vector> 

using namespace std;

int hourSum(int row, int col, vector<vector<int>> arr) {
    int sum = arr[row][col]; 
    sum += arr[row+1][col] + arr[row-1][col];
    sum += arr[row-1][col-1] + arr[row+1][col+1] + arr[row+1][col-1] + arr[row-1][col+1];
    return sum; 
}

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int rowLength = arr.size(); 
    int colLength = arr[0].size(); 
    int MAX = INT_MIN; 

    for (int i = 0; i< rowLength; i++) {
        for (int j = 0; j< colLength; j++) {
            if (i -1 >=0 && j -1 >=0 && i + 1 <= rowLength-1 && j+1 <= colLength-1) {
                MAX = max(MAX, hourSum(i, j, arr)); 
            }
        }
    }
    return MAX; 
}