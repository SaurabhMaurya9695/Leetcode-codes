class Solution {
public:
    int numTilings(int n)
    {
       vector<long long int> dp(1001, 0);
        // draw a diagram and try to figure out the things 
        dp[1] = 1;  
        dp[2] = 2;
        dp[3] = 5;
        for(int i = 4; i < 1001; i++)
            dp[i] = (dp[i - 1] * 2 + dp[i - 3]) % (1000000007);
        return(dp[n]);
    
    }
};