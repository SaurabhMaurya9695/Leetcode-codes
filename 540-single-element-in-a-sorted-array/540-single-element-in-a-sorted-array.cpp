class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        
        // using map 
//         map<int,int> mp;
//         int n = nums.size() ;
//         for(int i =0 ;i< n ;i++)
//         {
//             mp[nums[i]]++;
//         }
//         int x ;
//         for(auto it : mp)
//         {
//             if(it.second == 1 )
//             {
//                x  = it.first;
                
//             }
//         }
//         return x ;
        
        
        // using xor ;
        // int ans = 0;
        // for(int x : nums)
        // {
        //     ans = ans ^ x;
        // }
        // return ans;
        
        
        
        
            // first from starting if all of the element is appearing twice then first element should be occur at even index and next on at odd index; when the single element is present then its order should change ..means the first elemnt should occur at odd place and the net on is at even place;  
        // i=   0 1 2 3 4 5 6 7 8  ( mid = 4)
            // [1,1,2,3,3,4,4,8,8]
            //  s                e          
             //then should be atleast one elemnt present behind the array which occurs one time ;
                int high = nums.size()-1;
        int low = 0;
        int mid;
        
        //Boundary cases
        if(high==0)
            return nums[0];
        else if(nums[0]!=nums[1])
            return nums[0];
        else if(nums[high]!=nums[high-1])
            return nums[high];

        while(low<=high)
        {
            mid = low + (high-low)/2;
            //Unique element condition
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                return nums[mid];
            
            if(((mid%2)==0 && nums[mid]==nums[mid+1])
               ||  ((mid%2)==1 && nums[mid]==nums[mid-1]))
                low = mid+1;
            else
                high = mid-1;
            
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
