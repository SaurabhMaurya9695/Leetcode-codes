class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
        int res = 0 ;
        for(int i = 0; i< n; i++)
        {
            int x = (s[i] -'A') + 1;
            res = (res * 26) + x;
        }
        return res;
        
    }
};