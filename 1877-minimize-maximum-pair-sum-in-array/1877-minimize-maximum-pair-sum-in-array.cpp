class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum = 0 ;
        // 2 , 3, 3, 5
        sort(nums.begin() , nums.end()) ;
        int i = 0 , j = nums.size() - 1 ;
        while(i <= j){
            sum = max(sum , nums[i] + nums[j]);
            i ++ ;
            j -- ;
        }
        
        return sum ;
        
        
    }
};