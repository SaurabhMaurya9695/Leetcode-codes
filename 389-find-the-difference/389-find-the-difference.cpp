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
    {
        char ret ='\0';
        for (auto &c: s) ret^=c;
        for (auto &c: t) ret^=c;
        return ret;
    }
};