class Solution {
public:
    int maxProfit(vector<int>& price) {
        // we get our ans from the minimum buy values
        int leastSoFar = INT_MAX;
        int n = price.size();
        int ans = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(leastSoFar > price[i]){
                leastSoFar = price[i] ;
         
            }
            
            // now we have to find the ans with leastSoFar 
            if(ans < price[i] - leastSoFar){
                ans = price[i] - leastSoFar ;
            }
        }
        return ans;
    }
};