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
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        // return min(solve(cost,n-1),solve(cost,n-2));
        
        vector<int> dp(n , -1);
        return min(memo(cost,dp ,n-1),memo(cost,dp ,n-2));
    }
};