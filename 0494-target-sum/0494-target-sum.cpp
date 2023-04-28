class Solution {
public:
    vector<vector<int>> dp;
    int helper(int i,vector<int> &nums,int target,int n){
        if(i==n and target==0) return 1;
        if(i==n) return 0;
        if(dp[i][target+1000]!=-1) return dp[i][target+1000];
        int a=0;
        int left =helper(i+1,nums,target-nums[i],n);
        int right = helper(i+1,nums,target+nums[i],n);
        return dp[i][target+1000]= left + right;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(),s=0;
        dp.resize(n+1,vector<int>(target+2001,-1));
        return helper(0,nums,target,n);
    }
};