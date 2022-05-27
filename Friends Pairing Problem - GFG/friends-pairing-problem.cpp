// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

#define ll long long
#define mod 1000000007
    int solve(ll n , vector<ll> &dp)
    {
        if(n == 0 || n ==1) return 1 ;
        if(dp[n] != -1)
        {
            return dp[n];
        }
        // two choices  ;
        ll single = solve( n - 1 , dp) % mod ;
        ll pair = (solve( n - 2 , dp) * (n  - 1)) % mod ;
        return (dp[n] = single + pair ) % mod ;
    }
    int countFriendsPairings(int n) 
    { 
        vector<ll> dp(n + 1 , -1) ;
        return solve(n , dp) ;
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends