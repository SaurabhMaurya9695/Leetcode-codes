class Solution {
public:
    
    //recursion;
    int solve(int i , int j)
    {
        // base cases; 
        if(i < 0 || j < 0) return 0; //boundary cases ;
        if(i == 0 && j==0) 
            return 1;
        int left = solve(i , j-1) ;
        int up = solve(i-1 , j) ;
        return left + up ;
        
    }
    
    // Memorization ;
    int solvememo(int i , int j , vector<vector<int>> &dp)
    {
        if(i < 0 || j < 0) return 0; //boundary cases ;
        if(i == 0 && j==0) 
            return 1;
        if(dp[i][j] != -1)
            return dp[i][j] ;
        int left = solvememo(i , j-1, dp) ;
        int up = solvememo(i-1 , j , dp) ;
        return dp[i][j] = (left + up) ;
    }

    
    int uniquePaths(int m, int n)
    {
        //vector<vector<int>> dp(m , vector<int> (n, -1)) ;
        // return solve(m-1 , n-1) ;   //recursion call;
        
        // return solvememo(m-1 , n-1 , dp); // memorization ;
        int dp[m][n] ;
        
        for(int i = 0; i< m ;i++)
        {
            for(int j =0 ; j< n ; j++)
            {
                if(i == 0 && j== 0)
                {
                    dp[i][j] = 1;
                }
                else{
                    int left = 0 , right = 0 ;
                        if(i > 0) 
                        {
                             left  = dp[i-1][j] ;
                        }
                        if(j > 0)
                        {
                             right = dp[i][j-1];
                        }
                        dp[i][j] = left + right ;
                    }
            }
        }
        return (dp[m-1][n-1]) ;
    }
};