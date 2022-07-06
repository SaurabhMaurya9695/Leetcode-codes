class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0 || nums.size() == 1) {
            return nums.size();
        }
        
        // Sorting the vector
        sort(nums.begin(), nums.end());
        
        int countLength = 0;
        int maxCountLength = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i+1] - nums[i] == 1) {
                countLength++;
            } else if(nums[i+1] == nums[i]) {
                continue;
            } else {
                // maxCountLength = max(maxCountLength, countLength);
                if(countLength > maxCountLength)
                {
                    maxCountLength = countLength ;
                }
                else{
                    maxCountLength = maxCountLength;
                }
                countLength = 0;
            }
        }
        
        maxCountLength = max(maxCountLength, countLength);
        
        return (maxCountLength + 1);
    }
};