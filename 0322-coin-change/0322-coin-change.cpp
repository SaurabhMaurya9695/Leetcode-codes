class Solution {
public:
    #define ll long long 
    int memo(int amount, vector<int>& coins, int dp[]) {
        if (amount == 0)
            return 0;
        if (dp[amount] != -1)
            return dp[amount];

        int minCoins = INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            if (amount - coins[i] >= 0) {
                minCoins = min(minCoins, memo(amount - coins[i], coins, dp));
            }
        }

        if (minCoins < INT_MAX)
            minCoins += 1;
        return dp[amount] = minCoins;
    }

    int coinChange(vector<int>& coins, int amount) {
        ll n = coins.size() ;
        int dp [amount + 1];
        memset(dp , -1 ,sizeof(dp)) ;
        int ans = memo(amount, coins, dp);
        return (ans == INT_MAX) ? -1 : ans;
    }
};