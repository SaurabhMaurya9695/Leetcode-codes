class Solution {
public:
    
    
    int helper(int row, int col, vector<vector<int>> &grid, vector<vector<int>>&dp)
    {
        // Negative Base Case: Out of the Grid
        if(row >= grid.size() || col >= grid[0].size()) 
            return INT_MAX;
                
        // Positive Base Case: Destination is Reached
        if(row == grid.size() - 1 && col == grid[0].size() - 1)
            return grid[row][col];
                
        if(dp[row][col] != -1) return dp[row][col];

        int horizontal = helper(row, col + 1, grid, dp); 
        int vertical = helper(row + 1, col, grid, dp);
        
        return dp[row][col] = min(horizontal, vertical) + grid[row][col];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;
        vector<vector<int>> dp(n + 1 , vector<int>(m + 1 , -1));
        return helper(0 , 0 , grid , dp) ;
    }
};