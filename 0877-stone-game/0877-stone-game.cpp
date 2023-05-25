// if player 1 choose odd idx then he force to the opprosit person to choose even index
// and vice versa
// this solution work for only even idx;


// so ans is always true
class Solution {
public:
    int dp[501][501][2];
    bool solve(int turn , vector<int>& piles ,int ali , int bob ,int start , int end)
    {
        if(start == end){
            if(turn == 0) 
            {
                ali += piles[start];
            }
            else {
                bob += piles[end];
            }
            return ali > bob;
        }

        if(dp[start][end][turn] != -1) 
        {
            return dp[start][end][turn];
        }

        if(turn == 0) // alice turn 
        {
            // he can choose from start or from end ;
            dp[start][end][turn] =  solve(1 , piles , ali + piles[start] , bob , start + 1 ,end) || 
                              solve(1 , piles , ali + piles[end] , bob , start , end-1);
        }
        else {
            // bob turn 
            dp[start][end][turn]  =  solve(0 , piles , ali , bob + piles[start], start+1 ,end) ||  
                              solve(0 , piles , ali , bob + piles[end] , start , end-1);
        }

        return dp[start][end][turn];
    }

    bool stoneGame(vector<int>& piles) { 
        memset(dp ,-1 , sizeof(dp)) ;
        return solve(0,piles,0,0,0,piles.size()-1);
    }
};