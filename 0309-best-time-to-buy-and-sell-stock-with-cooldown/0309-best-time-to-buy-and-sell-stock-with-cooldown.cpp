class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;

        int buy[prices.size()]  ;
        int sell[prices.size()]  ;

        buy[0] = -prices[0];
        sell[0] = 0;
        buy[1] = max(-prices[0], -prices[1]); // Either buy 0th stock or 1st stock
        sell[1] = max(0, prices[1] - prices[0]); // Either do nothing or Buy 0 Sell 1

        for (int i = 2; i < prices.size(); i++) {
            buy[i] = max(buy[i - 1], sell[i - 2] - prices[i]);
            sell[i] = max(sell[i - 1], buy[i - 1] + prices[i]);
        }

        return sell[prices.size() - 1];
    }
};