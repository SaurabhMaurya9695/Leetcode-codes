//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	#define ll long long
	#define mod 1000000007
	ll countStrings(int n) {
	   vector<ll > dp0 ( n + 1) ;// ending with zero ;
	   vector<ll > dp1 ( n + 1) ;// ending with ones ;
	   dp0[1] = 1; // length with 1 ;
	   dp1[1] = 1; // length with 1 ;
	   for(ll i = 2 ; i <=  n ; i++)
	   {
	       dp0[i] = (dp0[i - 1] + dp1[i - 1]) % mod;
	       dp1[i] = dp0[i -1 ];
	   }
	   return (dp0[n] + dp1[n]) % mod ;
	   
	}
};

//{ Driver Code Starts.

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
}
// } Driver Code Ends