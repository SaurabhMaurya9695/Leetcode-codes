class Solution {
public:
    #define ll long long 
    int jump(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>dp(n,0); // minimum number of steps to reach end from ith position
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int m = 10000; // variable to store minimum number of steps
            for(int j=1;j<=nums[i] && j+i<n;j++){
                m = min(dp[j+i],m);
            }
            dp[i]=m+1;
        }
        return dp[0];

    }
};