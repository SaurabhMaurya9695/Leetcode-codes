class Solution{
public:
	int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        vector<vector<int>> after (2, vector<int> (3, 0));
        vector<vector<int>> curr (2, vector<int> (3, 0));
        // initilized 3d DP dp[idx][buy][cap];
        // traverse in opposit direction 
        for(int idx = n - 1; idx >=0; idx --) 
        {
            for(int buy = 0; buy <= 1; buy ++)
            {
                for(int cap = 1; cap <= 2; cap ++) 
                {
                    // write the recurrence relation of memorized code ;
                    if(buy == 1)  //state of buying
                        curr[buy][cap] = max(-prices[idx] + after[0][cap], after[1][cap]);
                    else        //state of selling
                        curr[buy][cap] = max(+prices[idx] + after[1][cap - 1], after[0][cap]);
                }
            }
            after = curr ;
        }
        
        return curr[1][2];
    }
};