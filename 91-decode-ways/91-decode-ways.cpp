class Solution {
public:
    int solve(string str , int idx ,vector<int> &dp )
    {
        // base case
        if(idx == str.size())
        {
            return 1 ;
        }
        if (dp[idx] != -1)
            return dp[idx];

        int left = 0 , right = 0 ;

        int ch1 = (str[idx] - '0');
        if (ch1 >= 1 && ch1 <= 9) {
            left += solve(str, idx + 1, dp); // when we are making a single char taking call then we just have to check single char should not be start with zero ;
        }

        if (idx + 1 < str.size()) {
            int ch12 = (str[idx] - '0') * 10 + (str[idx + 1] - '0'); // same thing in this overall value should not be > 26 ;
            if (ch12 >= 10 && ch12 <= 26)
                right += solve(str, idx + 2, dp);
        }

        dp[idx] = (left + right);
        return (left + right);
    }
    
    int numDecodings(string s) 
    {
        int n = s.size() ;
        vector<int> dp(n + 1 , -1); // making a dp
        return solve(s , 0 , dp) ; // calling the function 
        
    }
};