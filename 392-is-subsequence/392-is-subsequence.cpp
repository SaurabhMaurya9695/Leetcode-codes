class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true; // empty string always exist;
        int ss = 0, tt = 0;
        while(tt < t.size())
        {
            if(s[ss] == t[tt])
            {
                ss++;
                // at any point we get ss == s.size()  means string is present
                if(ss == s.size())
                    return true;
            }
            
            
            tt++;
        }
        return false;
    }
};