class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rowLen = grid.size(); 
        if (rowLen == 0) return 0; 
        int colLen = grid[0].size(); 
        
        if (rowLen == 0 || colLen == 0) return 0; 
        
        int numIslands = 0; 
        for (int r = 0; r < rowLen; r++) {
            for (int c = 0; c < colLen; c++) {
                if (grid[r][c] == '1') {
                    sinkIsland(r, c, grid); 
                    numIslands++; 
                }
            }
        }
        return numIslands; 
    }
    
    void sinkIsland(int r, int c, vector<vector<char>>& grid) {
        if (r < 0 || c < 0 || r > grid.size()-1 || c > grid[0].size() -1 || grid[r][c] != '1') {
            return; 
        }
        grid[r][c] = '0'; 
        sinkIsland(r + 1, c, grid);
        sinkIsland(r - 1, c, grid);
        sinkIsland(r, c + 1, grid);
        sinkIsland(r, c - 1, grid);
    }
};