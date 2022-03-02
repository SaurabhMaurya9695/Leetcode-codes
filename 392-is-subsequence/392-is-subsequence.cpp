class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        int is =0 , it = 0;
        int n = s.size();
        int m = t.size() ;
        while(it < m)
        {
            if(s[is] == t[it])
            {
                is++;
                // cnt++;
                if(is == n)
                    return true;
            }
            it++;
            
        }
        return false;
    }
};