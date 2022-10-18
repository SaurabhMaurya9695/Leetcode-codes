class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string s = countAndSay(n-1), res="";
        int sz = s.size(), cnt = 1;
        for(int i=1; i<sz; i++) 
        {
            if(s[i] == s[i-1])
                cnt++;
            else {
                res += to_string(cnt)+s[i-1];
                cnt = 1;
            }
        }
        res += to_string(cnt)+s[sz-1];
        
        return res;
    }
};