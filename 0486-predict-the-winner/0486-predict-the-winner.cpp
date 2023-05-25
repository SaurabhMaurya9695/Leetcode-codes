class Solution {
public:
    
    int solve(vector<int> nums , int left , int right ){
        if(left > right) return 0 ;
        if(left == right) return nums[left] ;
        
        //draw tree and observe calls 
        // these call made by player 1
        int c1 = solve(nums , left + 2 , right) ;
        int c2 = solve(nums , left + 1 , right - 1) ;
        int c3 = solve(nums , left , right - 2) ;
        
        //player 1 wants the max sum but for player 2 min would be added ;
        
         return max(nums[left] + min(c1, c2) , nums[right] + min(c2 , c3)) ;        
    }
    bool PredictTheWinner(vector<int>& nums) {
        // player 1 choose max for himself and player 2 min for player 1 ;
        // we. can ignore the call for player 2 but it will pass the min value to player 1
        
        int player1_score =  solve(nums , 0 , nums.size() - 1);
        
        int sum = 0 ;
        
        for(int i = 0 ; i < nums.size()  ; i ++){
            sum += nums[i] ;
        }
        
        int player2_score = sum - player1_score ;
        if(player1_score >= player2_score){
            return true;
        }
        return false;
        
        
        
    }
};