class Solution {
public:
    
    int solve(vector<vector<int>> &arr , vector<vector<int>> &dp , int i , int j , int n , int m)
    {
        // base case ;
        
        // boundary condition
        if( (i < 0  ||  j < 0 || j >= m) )
        {
            return INT_MAX ;
        }
        if( i == n -1)
        {
            return arr[i][j] ;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int udiag = solve(arr , dp , i + 1, j - 1 , n , m) ;
        int row = solve(arr , dp , i + 1 , j , n , m) ;
        int ldiag = solve(arr , dp  , i + 1 , j + 1 , n , m);
        int ans = arr[i][j] + min(udiag , min(row , ldiag)) ;
        return dp[i][j] = ans ;
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n = matrix.size() ;
        int m = matrix[0].size() ;
        vector<vector<int>> dp(n + 1 , vector<int> (m + 1 , -1)) ;
        int res = INT_MAX ;
        for(int j = 0 ; j< m ; j++)
        {
            int ans = solve(matrix , dp , 0 , j , n , m) ;
            res = min(res , ans) ;
        }
        return res ;
        
    }
};