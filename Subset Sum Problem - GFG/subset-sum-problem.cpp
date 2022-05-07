// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

    int solve(int idx , int k , vector<int> &arr, vector<vector<int>> & dp)
    {
        // base case ;
        if(idx == 0)
        {
            return (dp[idx][k] = ( (arr[0] == k ) ? true : false ) ) ;
        }
        if(k == 0) return true ;
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
    
    bool isSubsetSum(vector<int>arr, int sum)
    {
        int n = arr.size() ;
        vector<vector<int >> dp( n + 1 , vector<int> (sum + 1 , -1)) ;
        return solve(n - 1 , sum , arr , dp) ;
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