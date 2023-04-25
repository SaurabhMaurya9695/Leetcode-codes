class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>stk;
        int ans = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            if(stk.size() > 0 && stk.top() < prices[i]){
                ans += prices[i] - stk.top();
                stk.pop();
            }
            stk.push(prices[i]) ;
        }
        return ans;
    }
};