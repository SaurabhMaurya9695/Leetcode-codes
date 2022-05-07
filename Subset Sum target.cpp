// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

    // Recursion + Memorization 
    int solve(int idx , int k , vector<int> &arr, vector<vector<int>> & dp)
    {
        // base case ;
        if(idx == 0)
        {
            return (dp[idx][k] = ( (arr[0] == k ) ? true : false ) ) ;
        }
        if(k == 0) return true ;
        // Memorization 
        if(dp[idx][k] != -1)
        {
            return dp[idx][k] ;
        }
        bool ntake = solve(idx - 1 , k ,arr , dp) ;
        bool take = false; 
        // explore cases ;
        if(k - arr[idx] >= 0)
           take = solve(idx - 1 , k - arr[idx] , arr, dp);
        
        return dp[idx][k] = (take | ntake) ;
    }
    
    //tabulation -> 
    int tab(vector<int> arr , int sum)
    {
        int n = arr.size() ;
        vector<vector<int >> dp( n + 1 , vector<int> (sum + 1 , 0)) ;
        for(int i = 0; i< n- 1; i++)
        {
            dp[i][0] = true ;
        }
        dp[0][arr[0]] = true;
        
        for(int i = 1; i< n  ; i++)
        {
            for(int target = 1; target <= sum ; target++)
            {
                bool ntake = dp[i - 1][target] ;
                bool take = false; 
                // explore cases ;
                if(target - arr[i] >= 0)
                   take = dp[i - 1][target - arr[i]];
                
                dp[i][target] = (take | ntake) ;
            }
        }
        return dp[n-1][sum ] ;
    }
    
    
    bool isSubsetSum(vector<int>arr, int sum)
    {
        // int n = arr.size() ;
        // vector<vector<int >> dp( n + 1 , vector<int> (sum + 1 , -1)) ;
        // return solve(n - 1 , sum , arr , dp) ;
        return tab(arr , sum) ;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
