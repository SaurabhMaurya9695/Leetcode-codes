class Solution {
public:
    //1 recursion 
//     int fib(int n) {
       
//         if(n == 0 || n == 1)
//         {
//             return n;
//         }
//         else{
//             return fib(n - 1) + fib( n - 2 );
//         }
        
//     }
    
    int solve(int n , vector<int>&dp)
    {
        if(n == 0 || n == 1)
        {
            return n;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        
        dp[n] =  solve(n - 1 , dp) + solve(n - 2 , dp);
        return dp[n];
        
    }
    
    int fib(int n)
    {
        vector<int> dp(n + 1 , -1);
        return solve(n , dp);
    }
};