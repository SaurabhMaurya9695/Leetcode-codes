class Solution {
public:
    int dp[2501][2501]; 
    int solve(int idx , int prev_idx , vector<int>&nums)
    {
        if(idx == nums.size() ) return 0;
        if(dp[idx][prev_idx + 1] != -1) return dp[idx][prev_idx + 1];
        
        int yes = (prev_idx == -1 || nums[prev_idx] < nums[idx])
                   ? solve(idx + 1, idx, nums) + 1 : 0;
            
        int no = solve(idx + 1, prev_idx, nums);
        
        return dp[idx][prev_idx +1 ] = max(yes, no);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp ,-1, sizeof(dp)) ;
        return solve(0 , -1 , nums);
    }
};