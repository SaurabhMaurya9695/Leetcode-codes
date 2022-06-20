class Solution {
public:
    int n , m ;
    int solve(int i, int j, vector<vector<int>>& dungeon, vector<vector<int>> &dp) {
        if(i == n-1 && j == m-1) return dungeon[i][j] <= 0 ? (-dungeon[i][j]+1):1;

        if(dp[i][j] != -1) return dp[i][j];

        int right = 0, down = 0;

        if(j < m)
            right = solve(i, j+1, dungeon, dp);
        else
            return 1e8;

        if(i < n)
            down = solve(i+1, j, dungeon, dp);
        else
            return 1e8;

        int mn = min(right, down)-dungeon[i][j];

        return dp[i][j] = (mn <= 0 ? 1:mn);
    }

    int calculateMinimumHP(vector<vector<int>>& dungeon) {
         n = dungeon.size();
         m = dungeon[0].size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return solve(0, 0, dungeon, dp);
    }
};