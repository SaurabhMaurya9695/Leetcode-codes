class Solution {
public:
    //recursion ;
    int solve(int i , int j , vector<vector<int>> &grid)
    {
        // base cases; 
         if(i<0 || j<0 || grid[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
   
        // if(dp[i][j]!=-1) return dp[i][j];
        
        int up= solve(i-1, j, grid);
        int left= solve(i, j-1, grid);
        
        return up+left;
        
    }
    
    // memorization
    int solvememo(int i , int j , vector<vector<int>> &grid , vector<vector<int>> &dp) 
    {
        // base cases; 
        if(i<0 || j<0 || grid[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
   
        if(dp[i][j]!=-1) return dp[i][j];
        
        int up= solvememo(i-1, j, grid, dp);
        int left= solvememo(i, j-1, grid, dp);
        
        return dp[i][j] = up+left;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size() ;
        int n = arr[0].size();
        // return solve(m - 1 ,n-1  , arr) ; // recursion call
        
        vector<vector<int> > dp(m , vector<int> (n ,-1)) ;
        return solvememo(m-1 , n-1 , arr , dp);
    }
};