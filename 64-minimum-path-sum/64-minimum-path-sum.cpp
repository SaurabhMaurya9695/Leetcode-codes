class Solution {
public:
    // Memorization
    int memo(int i, int j, vector<vector<int>>& grid, vector<vector<int>> &dp)
    {
        if (i == 0 && j == 0)  
            return grid[i][j];
        if (i < 0 || j < 0)   
            return 1e9;

        if (dp[i][j] != -1)    
            return dp[i][j];

        int up = grid[i][j] + memo(i - 1, j, grid, dp);
        int left = grid[i][j] + memo(i, j - 1, grid, dp);

        return dp[i][j] = min(up, left);
    }
    
    
    // Recursion
    int solve(int i, int j, vector<vector<int>>& grid)
    {
        if (i == 0 && j == 0)  
            return grid[i][j];
        if (i < 0 || j < 0)   
            return 1e9;

        int up = grid[i][j] + solve(i - 1, j, grid);
        int left = grid[i][j] + solve(i, j - 1, grid);

        return  min(up, left);
    }

    // tabulation
    int tab(vector<vector<int>> &grid)
    {
       int m = grid.size();
       int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0) // base case;
                    dp[i][j] = grid[i][j];

                else
                {
                    int up = grid[i][j];
                    up += (i > 0) ? dp[i - 1][j] : 1e9;

                    int left = grid[i][j];
                    left += (j > 0) ? dp[i][j - 1] : 1e9;

                    dp[i][j] = min(up, left);
                }
            }
        }

        return dp[m - 1][n - 1];      
        
    }
    
    int minPathSum(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        //return solve(m-1 , n-1 , grid) ;   -> Recursion
        
        // memorization
        // vector<vector<int>> dp(m+1, vector<int>(n + 1, -1));
        // return memo(m - 1, n - 1, grid, dp);
        
        
        // tabulation ;
        return tab(grid) ;
    }
};
    
//     int bttop(int row , int col , vector<vector<int>> &arr , int m  , int n )
//     {
//         //base case ;
//         if(row  == m && col == n )
//         {
//             return arr[0][0] ;
//         }
            
//         int right = bttop(row, col + 1 , arr , m , n) ;
//         int down = bttop(row + 1 , col , arr ,  m , n);
//         return min(right , down) + arr[row][col] ;     
//     }
    