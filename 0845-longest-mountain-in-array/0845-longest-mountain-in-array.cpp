class Solution {
public:
    int longestMountain(vector<int>& nums) {
        int n = nums.size() ;
        // Longest increasing subarray ending at index i
        vector<int> prefix(n , 1);
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] < nums[i]) {
                prefix[i] = prefix[i - 1] + 1;
            }
        }

        vector<int> suffix(n , 1);
        // Longest decreasing subarray starting at index i
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > nums[i + 1]) {
                suffix[i] = suffix[i + 1] + 1;
            }
        }

        
        // Longest Bitonic Subarray = LIS + LDS - 1
        int ans = 0;
        for (int i = 0; i < n ; i++) {
            if (prefix[i] > 1 && suffix[i] > 1) {
                ans = max(ans , prefix[i] + suffix[i] - 1);
            }
        }

        return ans;
    }
};