class Solution {
public:
    int dp[100001][2][3];
    int solve(vector<int>& cost , int buy , int idx , int cap){
        
        if(cap == 0){ // at any moment our capacity become zero then we can't do next transaction
            return 0;
        }
        if(idx == cost.size()){
            return 0 ; // if we reached at last idx then our profit will be zero 
        }
        
        if(dp[idx][buy][cap] != -1){
            return dp[idx][buy][cap];
        }
        int ans = 0 ;
        if(buy == 1){ 
            int take =  -cost[idx] + solve(cost , 0 , idx + 1 , cap) ;  //adding buying cost and next sell we are going to do ;
            int notTake = 0 + solve(cost , 1 , idx + 1 , cap ) ; // same choice we are given to the next  day with profit zero ;
            ans = max(take , notTake) ;
        }
        else if(buy == 0) // buy == 0 means previous we buy somewhere we have to sell now ;
        {
            int take2 =  cost[idx] + solve(cost , 1 , idx + 1 , cap - 1) ; // on selling we adding our price and from next idx we are buying again so here our one transaction done we reduce our cap -1 ;
            int notTake2 = 0 + solve(cost , 0 , idx + 1 , cap ) ; // if we didn't sell on this day , so add profit as 0 and selling on next day ;
            ans = max(take2 , notTake2) ;
        }
        
        return dp[idx][buy][cap] = ans;
    }
    int maxProfit(vector<int>& prices) {
        //there is three changing state. , so it is a 3d dp ;
        // idx , buy | Not Buy , capacity ;
        memset(dp , -1 , sizeof(dp)) ;
        return solve(prices , 1 , 0 , 2) ;
    }
};