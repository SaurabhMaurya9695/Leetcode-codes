class Solution {
public:
    
    int solve(int idx , int n , vector<int>&dp)
    {
        if(idx > n) return 0 ; // base case ;
        if(idx ==  n ) return 1;
        if(dp[idx] != -1) return dp[idx]; // lookup
        int left = solve(idx + 1 , n , dp) ;
        int right = solve(idx + 2 , n , dp);
        return dp[idx] = left + right ;
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1 , -1);
        return solve(0 , n , dp) ;
        
    }
};