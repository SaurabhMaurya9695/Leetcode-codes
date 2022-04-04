class Solution {
public:
    
    //memorization
    int NthFib(vector<int> &dp,int n)
    {
            if(n == 0){
                return 0 ;
            }
             if(n == 1){
                return 1 ;
            }
            if(dp[n] != -1){
                return dp[n] ;
            }
            return dp[n] = NthFib(dp,n-2)+NthFib(dp,n-1) ;
    }
    
    
    //tabulation
    int tab(vector<int> &dp ,int n)
    {
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2 ; i<= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
        
        
    }
    int fib(int n) 
    {
        //using recursion ;
        // if(n == 0 || n==1)
        //     return n;
        // else{
        //     return fib(n-1) +fib(n-2);
        // }
        
        
        //Memoization One
        // vector dp(n+1,-1) ;
        // return NthFib(dp,n) ;
        
        // tabulation
        // vector<int> dp(n+1);
        // return tab(dp , n) ;
        
        //space optimization ;
        if(n == 0)
        {
            return 0 ;
        }
          if(n == 1)
          {
            return 1 ;
          }
          int prev2 = 0;
          int prev1 = 1 ;
         for(int i = 2 ; i <= n ; i++)
         {
             int curr = prev1+prev2 ;
             prev2 = prev1 ;
             prev1 = curr ;
         }
        return prev1 ;
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
