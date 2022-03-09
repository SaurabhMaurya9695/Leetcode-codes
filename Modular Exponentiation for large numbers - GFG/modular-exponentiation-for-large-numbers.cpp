// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	#define ll long long
    // #define mod 1000000007
    ll solve(ll x,  ll y, ll mod)
    {
        ll res = 1; // Initialize result
     
        while (y > 0) 
        {
            // If y is odd, multiply x with result
            if (y & 1)
                res = (res * x) % mod ;
     
            // y must be even now
            y = y >> 1; // y = y/2
            x = (x * x) % mod ; // Change x to x^2
        }
        return res;
    }
		ll PowMod(ll x,ll n,ll M) 
		{
		    // Code here
		    ll ans = solve( x , n , M) ;
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends