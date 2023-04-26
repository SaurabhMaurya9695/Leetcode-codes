class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;

        int buy0 = -prices[0];
        int sell0 = 0;
        int buy1 = max(-prices[0], -prices[1]); // Either buy 0th stock or 1st stock
        int sell1 = max(0, prices[1] - prices[0]); // Either do nothing or Buy 0 Sell 1

        for (int i = 2; i < prices.size(); i++) {
            int newbuy = max(buy1, sell0 - prices[i]);
            int newsell = max(sell1, buy1 + prices[i]);
            buy0 = buy1;
            sell0 = sell1;
            buy1 = newbuy;
            sell1 = newsell;
        }

        return sell1;
    }
};