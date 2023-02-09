class Solution {
public:
    string minWindow(string s, string t) {
        long long n = s.size() , m = t.size() ;
        unordered_map<char , long long > mp ;
        for(auto x : t) mp[x] ++ ;
        long long size = mp.size() ;
        long long ans = INT_MAX ;
        long long i = 0  , j = 0 ;
        int lsti = 0 ;
        string res;
        while(j < n)
        {
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0) {
                    size -- ;
                }
            }
            if(size == 0)
            {
                while(size == 0)
                {
                    if(ans > j - i + 1)
                    {
                        ans = min(ans , j - i  + 1);
                        lsti = i;
                        // res = s.substr(i , j - i  + 1) ;
                    }
                    if(mp.find(s[i]) != mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]] == 1) size ++;
                    }
                    i++;
                }
            }
            j ++ ;
            
        }
        return (ans == INT_MAX) ? "" : s.substr(lsti , ans);
        
    }
};