class Solution {
public:
    bool isAnagram(string s, string t) {
                
                // o(n) ->complexity
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t ;
        
        int n = s.size() , m = t.size() ;
        if(n != m) return false;
        
        unordered_map<char ,int> mp;
        for(auto x : s) mp[x]++;
        for(auto y : t) mp[y]--;
        
        for(auto x : mp)
        {
            if(x.second >= 1) return false;
        }
        return true ;
        
    }
};