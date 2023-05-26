class Solution {
public:
    
    int dp[501][501] ;
    int solve(int i , int j , vector<int> &stone){
        if(i > j) return 0 ;
        
        if(dp[i][j] != -1){
            return dp[i][j] ;
        }
        int taken_from_start = stone[i] - solve(i + 1, j , stone);
        int taken_from_end   = stone[j] - solve(i , j - 1 , stone);
        
        return dp[i][j] = max(taken_from_start , taken_from_end) ;
    }
    
    bool stoneGame(vector<int>& piles) {
        memset(dp ,-1, sizeof(dp));
        return solve(0 , piles.size() - 1 , piles) > 0;
    }
};