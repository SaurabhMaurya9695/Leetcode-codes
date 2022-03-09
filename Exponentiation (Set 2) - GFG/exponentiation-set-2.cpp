// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
#define ll long long
#define mod 1000000007
    ll solve(ll x,  ll y)
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
    ll power(ll a, ll b) 
    { 
        //complete the function here
        ll ans = solve(a, b) ;
        return ans ;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 


  // } Driver Code Ends