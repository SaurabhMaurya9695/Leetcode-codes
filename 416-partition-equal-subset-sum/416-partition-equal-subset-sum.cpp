class Solution {
public:
    bool solve(int idx , int target , vector<int> & arr, vector<vector<int>> &dp )
    {
        // BASE CASE;
        if(idx == 0)
        {
            return dp[idx][target] = (arr[0] == target ) ? true : false;
        }
        if(target == 0 ) 
        {
            return true ; // take nothing from the array;
        }
        //Memorization ;
        if(dp[idx][target] != -1)
        {
            return dp[idx][target] ;
        }
        // explore all paths ;
        bool  nt = solve(idx - 1 , target , arr , dp );
        bool t = false;
        if(target - arr[idx] >= 0)
        {
            t =solve(idx - 1 , target - arr[idx] , arr  , dp ) ;
        }
        return dp[idx][target] =( nt | t ) ;
        
    }
    
    bool canPartition(vector<int>& nums) {
        long long sum = 0;
        for(int x : nums)
        {
            sum += x;
        }
         
        if(sum % 2 == 1)
        {
            return false;
        }
        else{
            int target = sum / 2;
            vector<vector<int>> dp(nums.size() + 1 , vector<int> (target + 1 , -1 ));
            return solve(nums.size() - 1 , sum / 2 , nums , dp ) ;
        }
                        
                
    }
};