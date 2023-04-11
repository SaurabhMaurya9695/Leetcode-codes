class Solution {
public:
    
    long long solve(vector<int> &cell , int idx , vector<long long>&dp)
    {
        if(idx == cell.size() -1){
            return 0;
        
        }
        
        if(dp[idx] != -1){
            return dp[idx];
        }
        
        long long  ans = INT_MAX;
        for(int jump = 1; jump <= cell[idx] ; jump++){
            if(idx + jump < cell.size() )
                ans = min(ans , solve(cell , idx + jump , dp) + 1ll) ;
        }
        
        dp[idx] = ans ;
        return ans ;
    }
    int jump(vector<int>& nums) {
        int n = nums.size() ;
        vector<long long > dp (n + 1 , -1);
        return (int)solve(nums , 0 , dp) ;
    }
};