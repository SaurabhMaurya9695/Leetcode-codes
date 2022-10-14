class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) 
    {
        int n = a.size() ;
        int m = b.size() ;
        unordered_map<int,int> mp ;
        for(auto x : a) mp[x]++;
        vector<int>ans ;
        for(auto y : b)
        {
            if(mp[y] > 0)
            {
                if(mp.find(y) != mp.end())
                {
                    ans.push_back(y);
                    mp[y]--;
                }
            }
        }
        return ans ;
    }
};