class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int diff = 0 ;
        int sum = 0;
        for(int i = 1 ; i< nums.size() ; i++)
        {
            sum += abs(nums[0] - nums[i]) ;
        }
        return sum;
    }
};