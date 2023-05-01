class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m , vector<int>(n)) ;
        dp[m-1][n-1] = 1;
        for(int r = m-1; r >= 0; r--){
            for(int c = n-1; c >= 0; c--){
                if(r+1 < m){
                    dp[r][c] += dp[r+1][c];
                }
                else{
                    dp[r][c] += 0;
                }
                if(c+1 < n){
                    dp[r][c] += dp[r][c+1];
                }
                else{
                    dp[r][c] += 0;
                }
            }
        }
        return dp[0][0];
    }
};