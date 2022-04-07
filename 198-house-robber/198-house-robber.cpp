class Solution {
public:
    //Recursion 
    int solve(int idx , vector<int> &arr )
    {
        if(idx == 0)
            return arr[0] ;
        if (idx < 0) 
            return 0;
        int pick = arr[idx] + solve(idx - 2 , arr) ;
        int npick = 0 + solve(idx -1 , arr);
        return max(pick , npick);
        
    }
    
    //Memorization 
    int solvememo(int idx , vector<int> &arr , vector<int> &dp )
    {
        if(idx == 0)
            return arr[0] ;
        if (idx < 0) 
            return 0;
        if(dp[idx] != -1)
            return dp[idx] ;
        int pick = arr[idx] + solvememo(idx - 2 , arr , dp) ;
        int npick = 0 + solvememo(idx -1 , arr, dp);
        dp[idx] = max(pick , npick);
        return dp[idx] ;
        
    }
    
    //tabulation 
    int tab( vector<int>&nums)
    {
        int n = nums.size();
        vector<int> dp(n, -1);
        dp[0] = nums[0]; // base case initialization
        for (int i = 1; i < n; i++){
            int take = nums[i];
            if(i>1)
                take += dp[i - 2];
            int not_take = dp[i - 1];
            dp[i] = max(take, not_take);
        }
        return dp[n - 1];
        
    }
    
    
    int rob(vector<int>& nums) 
    {
        int n = nums.size() ;
        // return solve( n -1 , nums) ;
        vector<int> dp(n + 1 , -1);
        // return (solvememo(n - 1 , nums , dp)) ;
        
        return tab( nums) ;
        
    }
};