#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <iomanip>

using namespace std;

void printGrid(vector<vector<int>> grid); 

void bfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& visited) {

    queue<pair<int,int>> q; 
    q.push({row, col}); 
    visited[row][col] = true; 

    int count = 0; 
    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop(); 

        count++; 
        int row = curr.first; 
        int col = curr.second; 

        visited[row][col] = true; 

        if (grid[row][col] == 2) {
            cout << endl; 
            cout << "We found 2! " << endl ;
            cout << "It took this many steps: " << count << endl; 
            break; 
        }
        cout << grid[row][col] << " "; 

        if (row+1 < grid[0].size() && !visited[row+1][col]) {
            q.push({row+1, col});
        }
        if (row-1 >= 0 && !visited[row-1][col]) {
            q.push({row-1, col});
        }
        if (col + 1< grid.size()&& !visited[row][col+1]) {
            q.push({row, col+1});
        }
        if (col - 1>= 0 && !visited[row][col-1]) {
            q.push({row, col-1});

        }
    }
}

void dfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& visited) {
    // cout << "WHY";
    if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || visited[row][col]) {
        return; 
    }
    visited[row][col] = true;
    cout << grid[row][col] << " "; 
    if (grid[row][col] == 2) {
        cout << endl; 
        cout << "We found 2! "<< endl;
        return; 
    }
    dfs(grid, row-1, col, visited);
    dfs(grid, row+1, col, visited);
    dfs(grid, row, col+1, visited);
    dfs(grid, row, col-1, visited);
}


int main() {
    vector<vector<int>> grid;

    for (int i = 0; i < 10; i++) {
        vector<int> row; 
        for (int j = 0; j < 10; j++) {
            row.push_back(0); 
        }
        grid.push_back(row); 
    }

    vector<vector<int>> visited; 
    for (int i = 0; i < 10; i++) {
        vector<int> row; 
        for (int j = 0; j < 10; j++) {
            row.push_back(0); 
        }
        visited.push_back(row); 
    }

    grid[1][1] = 1; 
    grid[3][1] = 2; 

    printGrid(grid); 
    cout << "path is: ";
 
    // bfs(grid, 1, 1, visited); 
    dfs(grid, 1, 1, visited); 
    // printGrid(grid);
}


void printGrid(vector<vector<int>> grid) {

    for (int r = 0 ; r < grid.size(); r++ ) {
        for (int c = 0; c < grid[0].size(); c++) {
            cout << grid[r][c] << " ";
        }
        cout << endl; 
    }

    return;
}