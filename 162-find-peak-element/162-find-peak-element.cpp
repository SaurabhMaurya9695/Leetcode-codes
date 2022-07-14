class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start =0 ;
        int end = nums.size() - 1;
        int n = nums.size() ;
        if(n == 1) return 0;
        if(n == 2)
        {
            if(nums[0] > nums[1]) return 0;
            else  return 1;
        }
        
        int res = -1;
        while(start <= end)
        {
            int mid = (start + (end - start) / 2) ;
            if(mid > 0 &&  mid < n-1) // means mid can't be 0 or n - 1;
            {
                if(nums[mid] > nums[mid +1] && nums[mid] > nums[mid -1])
                    {
                        res = mid ;
                        break;
                    }
                    else if(nums[mid+1] > nums[mid]) // 7 8 9
                    {
                        start = mid + 1;
                    }
                    else{
                        end = mid - 1;
                    }
            }
            else if(mid == 0) //only two elemnt is there at starting;
            {
                res = (nums[0] > nums[1]) ? 0 : 1 ;
                break;
            }
            else if(mid == n - 1){
                res = (nums[n-1] > nums[n-2] ) ? n-1 : n-2;
                break;
                
            }
                
            
        }
        return res;
        
        
    }
};