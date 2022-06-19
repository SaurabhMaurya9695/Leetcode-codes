class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int x : nums1)
        {
            mp[x]++;
        }
        for(auto it : nums2)
        {
            if(mp.count(it))
            {
                ans.push_back(it);
                mp.erase(it);
            }
        }
        return ans ;
        
    }
};