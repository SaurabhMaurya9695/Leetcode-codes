//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int solve(int sr , int dc , vector<int> cost , vector<int>&dp)
    {
        if(sr == dc) return cost[sr];
        if(sr > dc) return  0;
        // lookup table ;
        if(dp[sr] != -1)
        {
            return dp[sr];
        }
        int left = solve(sr + 1 ,dc , cost , dp) + cost[sr];
        int right = solve(sr + 2 ,dc , cost , dp) + cost[sr];
        return dp[sr] = min(left , right) ;
    }
  
    int minCostClimbingStairs(vector<int>&cost ,int N) {
       int n = cost.size() ;
        
        vector<int> dp(n +  1 , -1);
        int zidx = solve(0 , n - 1 , cost , dp) ;
        int fidx = solve( 1 , n - 1 , cost , dp);
          return min(zidx , fidx);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends