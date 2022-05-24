// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	#define ll long long
	#define mod 1000000007
	
	
	ll solve(vector<ll> &dp , ll n)
	{
	    if(n == 0) return 1 ;
	    if(n == 1) return 2 ;
	    if(dp[n] != -1)
	    {
	        return dp[n];
	    }
	    
	    else{
	        return dp[n] = (solve(dp , n - 1) + solve(dp , n - 2)) % mod ;
	    }
	}
	ll countStrings(int n) 
	{
	   //  for n =0 - >  possiblities are 0  ; total -> 1
	   //  for n = 1 ->  possiblities are 0 and 1 ; total -> 2 ;
	   //  for n = 2 -> possibilities are 00 , 01 ,10 ; total -> 3 ;
	   //  for n = 3-> possiblities are 000, 010, 100, 101, 001 ; total -> 5 ;
	   
	   //this shows the fibonacci sequence  1 , 2 , 3 , 5 .....
	   vector<ll> dp(n + 1 , -1) ;
	   return solve(dp , n) ;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends