class Solution {
public:
    
    int dp[50001][2];
    int solve(int idx ,vector<int> &cost , int fee , int buy){
        
        if(idx == cost.size()){
            return 0;
        }
        
        if(dp[idx][buy] != -1){
            return dp[idx][buy] ;
        }
        
        int ans = 0 ;
        if(buy == 0){
            //then we have to sell here .. here we have two possibilites .. to sell or do nothing 
            
            // if we sell here
            int take = cost[idx] - fee + solve(idx + 1 , cost , fee , 1);
            
            // if we didn't sell here
            int not_take = 0 + solve(idx + 1 , cost , fee , 0);
            ans = max({take, not_take});
        }
        else{
            // if we buy here
            int take = -cost[idx] + solve(idx + 1 , cost , fee , 0);
            int not_take = 0 + solve(idx + 1 , cost , fee , 1);
            ans = max({take, not_take});
        }
        
        return dp[idx][buy] = ans ;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp , -1 ,sizeof(dp)) ;
        return solve(0 , prices , fee , 1);
    }
};