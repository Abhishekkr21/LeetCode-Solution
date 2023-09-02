class Solution {
public:
auto dfs(int row,int col,vector<vector<char>>& grid)
{
    int m = grid.size();
    int n = grid[0].size();
 if (row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == '0') {
                return;
 }
        grid[row][col] = '0';
            dfs(row - 1, col,grid);
            dfs(row + 1, col,grid);
            dfs(row, col - 1,grid);
            dfs(row, col + 1,grid);

}
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        int numIslands = 0;
            
    

        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (grid[row][col] == '1') {
                    numIslands++; 
                    dfs(row, col,grid); 
                }
            }
        }

        return numIslands;
    }
};