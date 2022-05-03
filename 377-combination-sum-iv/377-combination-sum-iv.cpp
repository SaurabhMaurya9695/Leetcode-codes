class Solution {
public:
    
     int solve( int amount, vector<int>& coins, vector<int> &dp) {
        if (amount < 0) return 0;
        if (amount == 0) return 1;
        if (dp[amount] != -1) return dp[amount];

        int perm = 0;
        for (int i = 0; i < coins.size() ; i++) {
                perm += solve(amount - coins[i], coins, dp);
        }

        return dp[amount] = perm;
    }
    int combinationSum4(vector<int>& arr, int target) 
    {
        int n= arr.size() ;
        vector<int> dp (target + 1 , -1) ;
        return solve( target , arr , dp) ;
        
    }
};