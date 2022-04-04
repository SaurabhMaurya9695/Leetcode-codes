class Solution {
public:    
    // using recursion   
    // int recursion(int n)
    // {
    //     if(n == 0) 
    //         return 0;
    //     else if(n == 1)
    //         return 1;
    //     else if(n == 2)
    //         return 1;
    //     else{
    //         return recursion(n-1) + recursion(n-2) + recursion(n -3);
    //     }
    // }
    
    
    // using memorization
    int memo(vector<int>&dp , int n)
    {
        if(n == 0) 
            return 0;
        else if(n == 1)
            return 1;
        else if(n == 2)
            return 1;
        else if(dp[n] != -1)
            return dp[n];
        else{
            int ans = memo(dp , n-1 ) + memo(dp , n-2) + memo(dp, n-3);
            return dp[n] = ans;
        }
        
    }
    
    int tribonacci(int n) 
    {
        // recursion ; 
        // return recursion(n);
        
        vector<int> dp(n+1 , -1);
        return memo(dp , n) ;
        
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
