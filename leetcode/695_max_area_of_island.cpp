class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid[0].size() == 0) return 0; 
       int maxArea = 0;  
        for (int i = 0; i< grid.size(); i++) {
            for (int j = 0; j< grid[0].size(); j++) {
               if (grid[i][j] == 1) {
                   int area = findArea(i, j, grid) ; 
                   maxArea = max(maxArea, area); 
               } 
            }
        }
        return maxArea;
    }
    
    int findArea(int r, int c, vector<vector<int>>& grid) {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0) {
            return 0; 
        }
        grid[r][c] = 0; 
        
        return 1 + findArea(r+1, c, grid) + findArea(r-1, c, grid) + findArea(r, c+1, grid) + findArea(r, c-1, grid); 
    }
};