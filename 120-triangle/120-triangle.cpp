class Solution {
public:
    
    
    int memo(vector<vector<int> > &arr , int i , int j , int n , int m , vector<vector<int>> &dp )
    {
       if(i == n -1)
        {
            return arr[n-1][j] ;
        }
        
        // check if it is already exist ;
        if(dp[i][j] != -1)
        {
            return dp[i][j] ;
        }
        //explore all the path ;
        int down = arr[i][j] + memo(arr , i+1 , j , n ,  m , dp) ;
        int diag = arr[i][j] + memo(arr , i+1 ,  j+1 , n , m , dp); 
        // choose minimum ;
        dp[i][j] =  min(down , diag) ; 
        return dp[i][j] ;
    }
    
    //Recursion  -> TLE
    int rec(vector<vector<int> > &arr , int i , int j , int n , int m)
    {
        // base case ; when i reached the n-1 th state;
        if(i == n -1)
        {
            return arr[n-1][j] ;
        }
        //explore all the path ;
        int down = arr[i][j] + rec(arr , i+1 , j , n ,  m) ;
        int diag = arr[i][j] + rec(arr , i+1 ,  j+1 , n , m); 
        // choose minimum ;
        return min(down , diag) ;
        
    }
    int minimumTotal(vector<vector<int>>& arr) 
    {
        int n = arr.size() ;int m = arr[0].size() ;
        // return rec(arr ,  0 , 0 , n ,  m) ; 
        
        vector<vector<int>> dp(n, vector<int>(n, -1) ) ;
        //memset(dp , -1 , sizeof(dp)) ;
        return memo(arr , 0 ,0 ,n , m , dp) ;
    }
};