class Solution {
public:
    
    int solve(string s , string t){
        int n = s.size() ;
        int m = t.size() ;
        
        vector<vector<int>> dp(n + 1 , vector<int>(m + 1, 0));
        for(int i = n - 1 ; i>= 0 ; i --){
            for(int j = m - 1; j >= 0 ; j --){
                if(s[i] == t[j]){
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }
                else{
                    dp[i][j]= 0 + max(dp[i][j + 1] , dp[i + 1][j]);
                }
            }
        }
        
        return dp[0][0];
        
    }
    
    int minDistance(string s, string t) {
        // s = abcd & t = anc
        // ac is common between these two string this is nothing just a LCS
        
        // no of element deleted from string s is n -  LCS
        
        // the minimum no of deletion to make
        
        int deletionFromS = s.size() - solve(s, t);
        int insertionInT = t.size() - solve(s, t);
        return deletionFromS + insertionInT ;
    }
};