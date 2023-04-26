class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int buy[ n + 1];
        int sell[n + 1] ;
        if(n == 1){
            return 0 ;
        }

        buy[0] = -prices[0];
        sell[0] = 0;
        int ans [n + 1];
 
        for (int i = 1; i < prices.size(); i++) {
            // Treat today as Buying Day
            buy[i] = max(buy[i - 1], sell[i - 1] - prices[i]);
            // Treat today as Selling Day
            sell[i] = max(sell[i - 1], buy[i - 1] + prices[i] - fee);
            ans[i] = max(buy[i] , sell[i]) ;
        }

        return ans[n - 1];
    }
};