class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = nums[0] ;
        int start = 0 ;
        int end = nums.size() - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] < ans){
                ans = nums[mid] ;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
    }
};