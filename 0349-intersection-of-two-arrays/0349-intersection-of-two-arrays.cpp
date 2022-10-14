class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) 
    {
        int n = a.size() ;
        int m = b.size() ;
        unordered_map<int,int > mp ;
        set<int> st ;
        for(auto & x : a) mp[x]++;
        for(auto x : b)
        {
            if(mp.find(x) != mp.end())
            {
                st.insert(x);
            }
        }
        vector<int> ans(st.begin() , st.end());
        return ans ;
        
        
    }
};