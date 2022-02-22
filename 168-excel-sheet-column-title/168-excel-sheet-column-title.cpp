class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int cur = columnNumber;
        
        while(cur > 0) 
        {
            cur--;
            
            int mod = cur%26;
            ans += ('A' + mod);
            
            cur /= 26;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};