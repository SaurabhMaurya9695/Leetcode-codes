class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size() ;
        int valley = 0;
        int ans = 0 ;
        while (valley < n){
            int peak = valley ;
            while(peak + 1 < n && prices[peak + 1] >= prices[peak] ){
                peak ++ ;
            }
            
            ans += prices[peak] - prices[valley] ;
            valley = peak + 1;
        }
        
        return ans ;
    }
};