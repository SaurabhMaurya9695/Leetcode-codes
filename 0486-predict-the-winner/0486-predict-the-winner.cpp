class Solution {
public:
    int dp[21][21] ;
    int solve(vector<int> nums , int left , int right ){
        if(left > right) return 0 ;
        if(left == right) return nums[left] ;
        
        if(dp[left][right] != -1){
            return dp[left][right];
        }
        //draw tree and observe calls
        int c1 = solve(nums , left + 1 , right ) ;
        int c2 = solve(nums , left , right - 1) ;
        
        //player 1 wants the max sum but for player 2 min would be added ;
        
         return dp[left][right] = max(nums[left] -  c1, nums[right] - c2) ;        
    }
    bool PredictTheWinner(vector<int>& nums) {
        // player 1 choose max for himself and player 2 min for player 1 ;
        // we. can ignore the call for player 2 but it will pass the min value to player 1
        memset(dp ,-1 , sizeof(dp)) ;
        int differnce_of_both_score =  solve(nums , 0 , nums.size() - 1);
        if(differnce_of_both_score >= 0){
            return true;
        }
        return false;
        
        
        
    }
};