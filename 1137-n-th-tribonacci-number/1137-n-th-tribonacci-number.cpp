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
    //     int memo(vector<int>&dp , int n)
    //     {
    //         if(n == 0) 
    //             return 0;
    //         else if(n == 1)
    //             return 1;
    //         else if(n == 2)
    //             return 1;
    //         else if(dp[n] != -1)
    //             return dp[n];
    //         else{
    //             int ans = memo(dp , n-1 ) + memo(dp , n-2) + memo(dp, n-3);
    //             return dp[n] = ans;
    //         }

    //     }

    
    
    // using tabulation
    // int tab(vector<int> &dp , int n)
    // {
    //     dp[0] = 0;
    //     dp[1] = 1;
    //     dp[2] = 1;
    //     for(int i = 3 ;i<= n ; i++)
    //     {
    //         dp[i] = dp[i-1] + dp[i-2] + dp[i-3] ;
    //     }
    //     return dp[n];
    // }
    
    int tribonacci(int n) 
    {
        // recursion ; 
        // return recursion(n);
        
        
        //using Memorization
        // vector<int> dp(n+1 , -1);
        // return memo(dp , n) ;
        
        //using tabulation ;
        // vector<int> dp(n+1 , 0);
        // return tab(dp , n);
        
        //using space optimization ;
          int t0 = 0, t1 = 1, t2 = 1, t;
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else if (n == 2)
            return 1;
        else
            for (int i = 3; i <= n; i++)
            {
                t = t0 + t1 + t2;
                t0 = t1;
                t1 = t2;
                t2 = t;
            }
        return t;
        
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
