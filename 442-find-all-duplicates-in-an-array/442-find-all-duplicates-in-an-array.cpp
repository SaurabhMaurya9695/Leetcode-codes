class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        vector<int> ans;
        for(int i  = 0 ;i < n ; i++)
        {
            mp[arr[i]]++;
        }
        for(auto it : mp)
        {
            if(it.second  >1)
            {
                int x =it.first;
                ans.push_back(x);
            }
        }
        return ans;
    }
};