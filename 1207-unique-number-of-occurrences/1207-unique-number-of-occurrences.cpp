class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int> mp ;
        for(auto x : arr) mp[x]++;
        set<int> st;
        for(auto x : mp) st.insert(x.second);
        return (st.size() == mp.size() ? true : false ); 
    }
};