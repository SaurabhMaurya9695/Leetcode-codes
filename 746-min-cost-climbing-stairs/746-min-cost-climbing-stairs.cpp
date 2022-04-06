class Solution {
public:
    
    //recursion ;
    int solve(vector<int>& cost,int n)
    {
        if(n<2) return cost[n];
        return cost[n]+min(solve(cost,n-1),solve(cost,n-2));
    }
    
    // memorization ;
    int memo(vector<int> &cost , vector<int> &dp , int n)
    {
        if(n<2) return cost[n];
        if(dp[n]!=-1) return dp[n];
        return dp[n]=cost[n]+min(memo(cost,dp ,n-1),memo(cost,dp ,n-2));
    } 
    
    
    //tabulation
    int tab(vector<int> &cost , vector<int> &dp , int n)
    {
       if (cost.size() == 2) return min(cost[0], cost[1]);
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for (int i = 2; i < n; i++)
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        
        return min (dp[n - 1], dp[n - 2]);
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        
        //recursion 
        // return min(solve(cost,n-1),solve(cost,n-2));
        
        //memorization      
        // vector<int> dp(n , -1);
        // return min(memo(cost,dp ,n-1),memo(cost,dp ,n-2));
        
        // tabulation
        vector<int> dp(n+1, 0);
        return tab(cost , dp , n) ;
    }
};