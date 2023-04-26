class Solution {
public:
    int dp[50001][2];
    int solve(vector<int>& cost , int buy , int idx , int fee){
        
        
        if(idx == cost.size()){
            return 0 ; // if we reached at last idx then our profit will be zero 
        }
        
        if(dp[idx][buy] != -1){
            return dp[idx][buy];
        }
        //every idx has two possiblility's ti buy or sell ;
        int ans = 0 ;
        if(buy == 1){ // we have given idx to buy
            int take =  -fee - cost[idx] + solve(cost , 0 , idx + 1 , fee) ; 
            int notTake = 0 + solve(cost , 1 , idx + 1 , fee) ; 
            ans = max(take , notTake) ;
        }
        else if(buy == 0) // buy == 0 means previous we buy somewhere we have to sell now ;
        {
            int take2 =   cost[idx] + solve(cost , 1 , idx + 1 , fee) ; 
            int notTake2 = 0 + solve(cost , 0 , idx + 1 , fee) ; 
            ans = max(take2 , notTake2) ;
        }
        
        return dp[idx][buy] = ans ;
    }
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp ,-1 , sizeof(dp)) ;
        return solve(prices , 1 , 0 , fee) ;
    }
};