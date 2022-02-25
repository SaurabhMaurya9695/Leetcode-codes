class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0)return -1;
        
        int low =0;
        int high = n -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){   // if target == mid
                return mid;
            }
            
            // check if left half is sorted
            if(nums[low] <= nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){ // check if target belongs to left sorted subarray
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                // if left is not sorted it gurantees that right half if sorted
                
                if(target>=nums[mid] && target<=nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        
        return -1;
    }
};