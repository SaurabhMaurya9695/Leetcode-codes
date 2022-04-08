class Solution {
public:
    
    //recursion;
    int solve(int i , int j)
    {
        // base cases; 
        if(i < 0 || j < 0) return 0; //boundary cases ;
        if(i == 0 && j==0) 
            return 1;
        int left = solve(i , j-1) ;
        int up = solve(i-1 , j) ;
        return left + up ;
        
    }
    
    // Memorization ;
    int solvememo(int i , int j , vector<vector<int>> &dp)
    {
        if(i < 0 || j < 0) return 0; //boundary cases ;
        if(i == 0 && j==0) 
            return 1;
        if(dp[i][j] != -1)
            return dp[i][j] ;
        int left = solvememo(i , j-1, dp) ;
        int up = solvememo(i-1 , j , dp) ;
        return dp[i][j] = (left + up) ;
    }
    
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m , vector<int> (n, -1)) ;
        // return solve(m-1 , n-1) ;   //recursion call;
        
        return solvememo(m-1 , n-1 , dp);
    }
};