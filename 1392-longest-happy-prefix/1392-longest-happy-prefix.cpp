class Solution {
public:
    
    
    
     void computeLPS(string pattern, vector<int>& lps) {
            int M = pattern.length();
            int len = 0; // Length of the previous longest prefix & suffix
        
            lps[0] = 0; // Because there is no proper suffix and prefix of pattern[0..0]
        
            int i = 1;
            while (i < M) {
                if (pattern[i] == pattern[len]) {
                    len++;
                    lps[i] = len;
                    i++;
                } else {
                    if (len != 0) {
                        len = lps[len - 1];
                    } else {
                        lps[i] = 0;
                        i++;
                    }
                }
            }
        }
        
    
    string longestPrefix(string s) {
        
        int m = s.size();
        
        vector<int> lps(m, 0);
        computeLPS(s, lps);
        
        
        return s.substr(0 , lps.back());
    }
};