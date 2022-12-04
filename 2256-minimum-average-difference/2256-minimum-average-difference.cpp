class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int minAvgDiff = INT_MAX;
        vector<long long> prefixSum(n+1);
        vector<long long> suffixSum(n+1);

        for(int i = 0; i < n; i++){
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            suffixSum[i] = suffixSum[i + 1] + nums[i];
        }

        for(int i = 0; i < n; i++){
            // Calculate average of left part of array, index 0 to i.
            long long leftPartAverage = prefixSum[i+1];
            leftPartAverage = leftPartAverage/(i+1);

            // Calculate average of right part of array, index i+1 to n-1.
            long long rightPartAverage = suffixSum[i+1];
            // If right part have 0 elements, then we don't divide by 0.
            if (i != n - 1) {
                rightPartAverage /= (n - i - 1);
            }

            int currDiff = abs(leftPartAverage - rightPartAverage);
            // If current difference of averages is smaller,
            // then current index can be our answer.
            if (currDiff < minAvgDiff) {
                minAvgDiff = currDiff;
                ans = i;
            }
        }


        return ans;
    }
};