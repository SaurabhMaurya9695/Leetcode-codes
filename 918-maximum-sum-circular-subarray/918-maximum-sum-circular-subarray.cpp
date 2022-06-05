class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int maxSum = INT_MIN;
        int currSum = 0;
        int total = 0;
        
        for(int i=0; i<nums.size(); i++){
            currSum = max(nums[i], currSum + nums[i]);
            total += nums[i];
            maxSum = max(maxSum, currSum);
        }
        
        int minSum = INT_MAX;
        currSum = 0;
        
        for(int i=0; i<nums.size() ; i++){
            currSum = min(nums[i], currSum + nums[i]);
            minSum = min(currSum, minSum);
        }
        
        if(maxSum > 0) 
            return max(maxSum, total - minSum);
        else return maxSum;
    }
};