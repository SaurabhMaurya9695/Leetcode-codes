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
        int ans = 0;
        for(int x : nums)
        {
            ans = ans ^ x;
        }
        return ans;
    }
};