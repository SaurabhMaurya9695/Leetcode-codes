class Solution {
public:
    // this is combination  varience
    
    int solve(vector<int>& nums , int target  ,int lastcoin ,vector<vector<int>> &dp){
        
        if(target < 0 ) return 0;
        if(target == 0){
            return 1;
        }
        
        if(dp[target][lastcoin] != -1){
            return dp[target][lastcoin] ;
        }
        int ans = 0;
        for(int i = lastcoin; i < nums.size() ; i ++){
            ans += solve(nums , target - nums[i] , i , dp);

        }
        return dp[target][lastcoin] = ans ;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp (amount + 1, vector<int>(coins.size() + 1 , -1));
        return solve(coins , amount ,   0 , dp) ;
    }
};