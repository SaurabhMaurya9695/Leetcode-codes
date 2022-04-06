class Solution {
public:
    // top down recursion ;
    int topdown(int n)
    {
        if(n == 1) 
            return 1;
        else if(n == 2)
            return 2 ;
        else{
            return topdown(n-1) + topdown(n-2) ;
        }
        
    }
    
    //bottom up recursion ;
    int bottomup(int idx ,int n)
    {
        if(idx == n) // only one step is needed to be jump ;
            return 1;
        int ans = 0;
        // take one step ;
        if(idx + 1<=n)
        {
            ans += bottomup(idx+1 , n);
        }
        // take two step;
        if(idx + 2 <= n)
        {
            ans += bottomup(idx + 2 ,  n);
        }
        return ans ;        
    }
    
    // Memorization dp -> in  topdowm 
    
    int memo(int n , vector<int> &dp)
    {
        if(n == 1) 
            return 1;
        else if(n == 2)
            return 2 ;
        if(dp[n] != -1)
        {
            return dp[n] ;
        }
        else{
            dp[n] = memo(n-1 , dp ) + memo(n-2 , dp );
        }
        return dp[n] ;
    }
    int climbStairs(int n) 
    {
        // int res = topdown(n) ;  
        // int res = bottomup (0 , n) ;
        
        vector<int> dp(n+1 , -1) ;
        int res= memo( n , dp);
            
        return res ;      
        
    }
};