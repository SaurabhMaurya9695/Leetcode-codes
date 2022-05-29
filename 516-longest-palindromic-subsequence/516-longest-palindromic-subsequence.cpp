class Solution {
public:
//     int LCS(int i, int j, string s1, string s2, vector<vector<int>> &dp)
//     {
//         if(i == s1.size() || j == s2.size()) 
//             return 0; // LCS of Empty String with Other String is Empty String only
        
//         if(dp[i][j] != -1) return dp[i][j];
        
//         char ch1 = s1[i];
//         char ch2 = s2[j];
        
//         if(ch1 == ch2) // If characters are same, take the common from both of them
//             return dp[i][j] = 1 + LCS(i + 1, j + 1, s1, s2, dp);
        
//         // If character is uncommon, either not take s1[i] or not take s2[j]
//         int option1 = LCS(i + 1, j, s1, s2, dp);
//         int option2 = LCS(i, j + 1, s1, s2, dp);
//         return dp[i][j] =  0 + max(option1, option2);
//     }
    int longestPalindromeSubseq(string s) 
    {
        string t = s;
        int n = s.size() ;
        reverse(s.begin() , s.end());
        // vector<vector<int>> dp(n + 1 , vector<int>(n + 1 , -1)) ;
        // return LCS(0 , 0 , s, t, dp) ;
        int m = t.size() ;
       
        // tabulation
        vector<vector<int>>dp(n + 1 , vector<int> (m + 1 )) ;
        // dp[n+1][m+1] = 0;
        for(int i = n - 1 ; i>=0 ; i--)
        {
            for(int j = m - 1 ; j>=0 ; j--)
            {
                if(s[i] == t[j])
                {
                    dp[i][j] = dp[i+1][j+1] + 1;
                }
                else{
                    dp[i][j] = 0 + max(dp[i+1][j] , dp[i][j+1]);
                }
            }
        }
        return dp[0][0] ;
        
        
    }
};