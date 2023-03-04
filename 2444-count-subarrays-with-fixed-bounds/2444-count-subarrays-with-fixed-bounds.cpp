class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long  ans = 0;
        int leftBound = -1, jmin = -1, jmax = -1;
        for(int i = 0; i < nums.size();++i)
        {
            if(nums[i] < minK || nums[i] > maxK)    leftBound = i;
            if(nums[i] == minK) jmin = i;
            if(nums[i] == maxK) jmax = i;
            ans += max(0, min(jmax , jmin) - leftBound);
        }
        return ans;
    }
};