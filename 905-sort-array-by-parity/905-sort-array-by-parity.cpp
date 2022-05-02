class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int n = nums.size() ;
                //Method  1;
        
        // vector<int> even, odd;
        // for(int i = 0; i< n ; i++)
        // {
        //     if( nums[i] % 2 == 0)
        //     {
        //         even.push_back(nums[i]) ;
        //     }
        //     else{
        //         odd.push_back(nums[i]);
        //     }
        // }
        // for(int  x : odd)
        // {
        //     even.push_back(x) ;
        // }
        // return even ;
        
        
                    // Method 2;
        int start = 0 , end= n - 1;
        vector<int> ans(n) ;
        for(auto x : nums)
        {
            if(x % 2 == 0)
            {
                ans[start ++] = x;
                
            }
            else{
                ans[end --] = x;
            }
        }
        return ans ;
    }
};