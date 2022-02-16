class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size());
        prefix[0] = nums[0]%k;
        for (int i = 1; i < nums.size(); i++)
            prefix[i] = (prefix[i-1] + nums[i])%k;
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        for (int i = 0; i < prefix.size(); i++)
        {
           if (mp.count(prefix[i]))
           {
               if (i - mp[prefix[i]] > 1) 
                   return true;
           }
            else
                mp[prefix[i]] = i;
        }
        
        return false;
    }
};