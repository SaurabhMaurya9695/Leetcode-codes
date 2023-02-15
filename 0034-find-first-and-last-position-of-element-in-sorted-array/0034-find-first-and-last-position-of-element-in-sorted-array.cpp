class Solution {
public:
    int lower_bound(vector<int> arr , int target)
    {
        int n = arr.size() ;
        int low = 0 , high =  n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low ) / 2;
            if(arr[mid]  == target){
                ans = mid ; // we have to check in left
                high = mid -1 ;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
                
        }
        return ans ;
    }
    int upper_bound(vector<int> arr , int target)
    {
        int n = arr.size() ;
        int low = 0 , high =  n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low ) / 2;
            if(arr[mid]  == target){
                ans = mid ; // we have to check in right
                low = mid + 1;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans ;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int focc = lower_bound(nums , target) ;
        int locc = upper_bound(nums , target ) ;
        return {focc , locc} ;
    }
};