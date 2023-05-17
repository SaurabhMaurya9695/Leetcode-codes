class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size() ;
        int curr_sum = nums[0] ;
        int overall_sum = nums[0] ;
        
        //starting form one 
        for(int i = 1 ;i < n ;i++){
            if(curr_sum >= 0){
                curr_sum += nums[i];
            }
            else{
                curr_sum = nums[i];
            }
            if(curr_sum > overall_sum){
                overall_sum = curr_sum;
            }
        }
        
        return overall_sum;
    }
};