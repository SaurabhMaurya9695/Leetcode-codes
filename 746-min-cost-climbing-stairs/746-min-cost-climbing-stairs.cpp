class Solution {
public:
    
    // recursion 
    int solve(int idx , int dist , vector<int> &arr)
    {
        if(idx <2) return arr[idx] ;
        int left = solve(idx - 1 , dist , arr) ;
        int right = solve(idx - 2 , dist , arr) ;
        return (min(left , right) + arr[idx] );
        
    }
    
    // Memorization .
    int Memo(int idx , int dist , vector<int> &arr , vector<int> & dp)
    {
        if(idx <2) return arr[idx] ;
        if(dp[idx]  != -1)
        {
            return dp[idx] ;
        }
        int left = Memo(idx - 1 , dist , arr , dp) ;
        int right = Memo(idx - 2 , dist , arr , dp) ;
        return (dp[idx] = min(left , right) + arr[idx] );
        
    }
    
    int minCostClimbingStairs(vector<int>& cost)
    {
        int n = cost.size() ;
        vector<int> dp (n + 1 , -1) ;
        
        //return min(solve(n-1 , 0 , cost ) , solve(n-2 , 0 , cost)) ; // recursion ;
        return min(Memo(n-1 , 0 , cost , dp ) , Memo(n-2 , 0 , cost , dp)) ;
        
    }
};