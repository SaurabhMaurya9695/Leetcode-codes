// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	   #define ll long long 
	   #define mod 1000000007
	    int solve(ll n , ll m , vector<ll> &dp)
	    {
	        if(n < m ) return 1;
	        if(n == m) return 2 ;
	        if (dp[n] != -1 ) return dp[n] ;
	        ll left = solve( n - 1 , m , dp)  % mod;
	        ll right = solve( n - m , m , dp) % mod;
	        return dp[n] = (left + right)  % mod ;
	    }
		int countWays(int n, int m)
    	{
    	    vector<ll> dp ( n + 1 , -1) ;
    	    return solve( n , m , dp);
    	    
    	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.countWays(n, m);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends