class Solution {
public:
    
    // Recursion + Memorization 
    int solve(int idx , string s , int n , vector<int>&dp)
    {
        int left = 0 , right  = 0 ;
        if(idx == n)
        {
            if(s[idx] == '0') return 0 ;   // 0
            else{
                return 1;
            }
        }
        // lookup table;
        if(dp[idx] != - 1)
        {
            return dp[idx];
        }
        int ch = s[idx] - '0';
        if(ch >= 1 && ch <= 9)
        {
            left += solve(idx + 1 , s, n , dp);
        }
        else{
            left += 0;
        }
        if(idx+1 < n)
        {
            int ch2 =  (s[idx] - '0') * 10 + (s[idx + 1] - '0');
            if(ch2 >= 10 && ch2 <= 26)
            {
                right += solve(idx + 2 , s, n, dp);
            }
            else{  //61 58
                right += 0;
            }
        }
         int ans =  left + right ;
        return dp[idx] = ans ;
    }
    int numDecodings(string s) 
    {
        int n = s.size() ;
        vector<int> dp(n + 1 , -1);
        return solve(0, s, n , dp);
    }
    
    
   
};







