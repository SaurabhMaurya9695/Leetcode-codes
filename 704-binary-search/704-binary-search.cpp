class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if( binary_search(nums.begin() , nums.end() , target))
        // {
        //     return lower_bound(nums.begin() , nums.end() , target) - nums.begin();
        // }
        // else{
        //     return -1;
        // }
        
        
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target)
                return mid ;
            else if(nums[mid] > target)
            {
                end = mid - 1 ;
            }
            else{
                start =  mid + 1 ;
            }
        }
        return -1;
        
        
        
        
        
        
        
        
        
        
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();