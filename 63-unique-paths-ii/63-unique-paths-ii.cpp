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
    
    
    //tabulation
    
    int tab(vector<vector<int>> &grid  )  // bottom up dp;
    {
        int m = grid.size() ;
        int n = grid[0].size() ;
        int dp[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    dp[i][j]=0;
                else if(i==0 && j==0) 
                    dp[i][j]=1;
                else{
                        int up=0, left=0;
                        if(i>0)
                            up=dp[i-1][j];
                        if(j>0) 
                            left=dp[i][j-1];
                        dp[i][j]=up+left;
                }
            }
        }
        return dp[m-1][n-1];
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size() ;
        int n = arr[0].size();
        // return solve(m - 1 ,n-1  , arr) ; // recursion call
        
        vector<vector<int> > dp(m , vector<int> (n ,-1)) ;
        // return solvememo(m-1 , n-1 , arr , dp);
        
        return tab(arr) ;
    }
};