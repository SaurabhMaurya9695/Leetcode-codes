class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyingDay = prices[0] ;
        int ans = 0;
        for(int i =  0; i < prices.size() ; i ++){
            if(buyingDay < prices[i]){
                ans += abs(prices[i] - buyingDay);
                
            }
            buyingDay = prices[i];
            
        }
        
        return ans ;
    }
};