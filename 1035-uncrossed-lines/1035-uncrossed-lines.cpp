class Solution {
public:
    
    int solve(int i , int j , int n , int m , vector<vector<int>> &dp ,vector<int> &a , vector<int> &b)
    {
        if(i == n || j == m)
        {
            return 0;
        }
        // if both of them are same ;
        if(dp[i][j ] != -1)
        {
            return dp[i][j] ;
        }
        if(a[i] == b[j])
        {
            return dp[i][j] = 1 + solve(i + 1 , j + 1 , n , m , dp  , a, b);
        }
        else 
        {
            return dp[i][j] = 0 + max(solve(i + 1 , j , n , m , dp, a, b) ,solve(i , j + 1 , n , m , dp , a , b));
        }
        return dp[i][j] ;
    }
    int maxUncrossedLines(vector<int>& a, vector<int>& b) {
        // same code as LCS ;
        int n = a.size() ;
        int m = b.size() ;
        vector<vector<int>> dp(n + 1 , vector<int> (m + 1 ,-1)) ;
        return solve(0 , 0 , n , m ,dp , a, b ) ;
        
    }
};