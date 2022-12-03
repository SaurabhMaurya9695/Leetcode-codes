class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int >mp ;
        for(auto x : s) mp[x]++;
        vector<pair<int,char > > vp;
        for(auto x : mp)
        {
            vp.push_back({x.second , x.first});
        }
        sort(vp.rbegin() , vp.rend());
        string ans  ;
        for(auto x : vp)
        {
            int val = x.first ;
            while(val != 0)
            {
                 ans += x.second ;
                 val --;
            }
        }
        return ans;
    }
};