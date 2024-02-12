class Solution {
public:
    
    int dp[101][101];
    int solve(int sr , int sc, int dr , int dc){
        if(sr > dr || sc > dc){
            return 0;
        }
        
        if(sr == dr && sc == dc){
            return 1;
        }
        
        if(dp[sr][sc] != -1){
            return dp[sr][sc];
        }
        
        int down = solve(sr + 1, sc , dr , dc);
        int right = solve(sr , sc + 1, dr , dc);
        
        return dp[sr][sc] = (down + right) ;
    }
    
    int uniquePaths(int m, int n) {
        memset(dp , -1 , sizeof(dp));
        return solve(0 ,0 ,m - 1 , n -1 );
    }
};