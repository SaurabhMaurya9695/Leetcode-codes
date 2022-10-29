class Solution {
public:
            // Recursion 
    // int tribonacci(int n) 
    // {
    //     if(n == 0) return 0;
    //     if(n == 1) return 1 ;
    //     if( n == 2) return 1;
    //     else{
    //         return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    //     }
    // }
    int solve(vector<int>&dp  , int n)
    {
        if(n == 0) return 0;
        if(n == 1) return 1 ;
        if( n == 2) return 1;
        if(dp[n] != -1)
        {
            return dp[n];
        }
        
        dp[n] = solve(dp ,  n - 1) + solve(dp ,  n - 2) + solve(dp , n - 3);
        return dp[n];
        
    }
    
    int tribonacci(int n)
    {
        vector<int> dp(n + 1 , -1);
        return solve(dp ,  n);
    }
};