class Solution {
public:
    
    int ways(int idx , int n)
    {
        // base case;
        if(idx == n)
            return 1;
        int ans = 0;
        // no of ways to 1 ;
        if(idx + 1 <=n)
            ans+= ways(idx + 1 , n);
        // no of ways to 2 ;
        if(idx + 2 <=n)
            ans+= ways(idx + 2 , n);
        // no of ways to 3 ;
        if(idx + 3 <=n)
            ans+= ways(idx + 3 , n);
        return ans ;
    }
    
    int memo[46] = {};
    int mways(int n)
    {
        if (n == 1)
        {
            memo[n] = 1;
            return memo[n];
        }
        if (n == 2)
        {
            memo[n] = 2;
            return memo[n];
        }
        else if (memo[n] != 0)
            return memo[n]; 
        memo[n] = mways(n - 1) + mways(n - 2);
        return memo[n];
        
        
    }
    int climbStairs(int n) {
        // recursive code;
        // int ans = ways(0 , n);
        
        // memorization ;
       
        int ans2 = mways(n) ;
        return ans2;
    }
};