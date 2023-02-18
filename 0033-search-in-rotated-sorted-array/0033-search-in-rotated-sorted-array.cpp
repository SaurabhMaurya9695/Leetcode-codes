class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1){
            if(nums[0] == target){
                return 0;
            }
            else{
                return -1;
            }
        }
        int n = nums.size() - 1;
        int start = 0 , end = n ;
        // int res = -1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[start] <= nums[mid] ) { // left half
                if(target >= nums[start] && target <= nums[mid]){
                    //left 
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else //right half
            {
                if(target >= nums[mid] && target <= nums[end]){
                    //left 
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return  -1 ;
        
    }
};