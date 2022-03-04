class Solution {
public:
    char findTheDifference(string s, string t)
        // method 1
    // {
    //     int n = s.length();
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     for(int i=0; i<n; i++) if(s[i]!=t[i]) return t[i];
    //     return t[n];
    // }
        
        
        // method 2;
    // {
    //     char ret ='\0';
    //     for (auto &c: s) ret^=c;
    //     for (auto &c: t) ret^=c;
    //     return ret;
    // }
        
        // method3
        {
            unordered_map<char,int> mp;
            int n = s.size() ;
            for(int i = 0 ; i< n; i++)
            {
                mp[s[i]]++;
            }
            for(int i = 0 ; i< t.size() ; i++)
            {
                mp[t[i]]--;
            }
            for(auto it:mp)
            {
                if(it.second != 0)
                    return it.first ;
            }
            return '\0';
    }
    
    
    
    
    
    
    
};