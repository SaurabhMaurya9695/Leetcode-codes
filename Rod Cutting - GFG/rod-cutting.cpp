//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
    int dp[1001];
    int solve(int price[] , int n)
    {
        if(n == 0){
            return 0 ;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        int ans = 0 ;
        for(int cut = 1 ; cut <= n ;cut ++){
            ans = max(ans , price[cut - 1] + solve(price , n - cut));
        }
        
        return dp[n] = ans ;
    }
    int cutRod(int price[], int n) {
        //code here
        memset(dp ,-1 , sizeof(dp)) ;
        return solve(price , n );
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends