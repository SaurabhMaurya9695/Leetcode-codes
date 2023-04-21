class Solution {
public:
    int combinationSum4(vector<int>& nums, int amount) {
        vector<unsigned int> dp(amount+1, 0);
        dp[0] = 1; // Ways to reach dest when src = dest is 1. (Empty String)
        
        for(int i=1; i<= amount; i++){
            for(int coin: nums){
                if(i >= coin){
                    dp[i] += dp[i - coin];
                }
            }
        }
        return dp[amount];
    }
};