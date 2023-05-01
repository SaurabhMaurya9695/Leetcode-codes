//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	#define ll long long 
	
	// For Each Key, store the neighbouring keys and the same key itself. 
	                        //  0.         1.              2              3          4 
    vector<vector<ll>> adj = { { 0, 8 }, { 1, 2, 4 }, { 1, 2, 3, 5 }, { 2, 3, 6 }, { 1, 4, 5, 7 },
                                { 2, 4, 5, 6, 8 }, { 3, 5, 6, 9 }, { 4, 7, 8 }, { 0, 5, 7, 8, 9 }, { 6, 8, 9 } };
                   
    ll dp[25][2501]  ;           
    ll dfs(ll lastKey , ll toBePressed){
        
        if(toBePressed == 0){
            return 1;
        }
        
        if(dp[lastKey][toBePressed] != -1){
            return dp[lastKey][toBePressed] ;
        }
        ll res = 0;
        for(auto neightbour : adj[lastKey]){
            res += dfs(neightbour , toBePressed - 1) ;
        }
        return dp[lastKey][toBePressed] = res ;
    }
	long long getCount(int n)
	{
	    memset(dp , -1 , sizeof(dp)) ;
	    ll ans = 0 ;
	    for(int i = 0 ; i < 10 ; i++){
	        ans += dfs(i , n-1) ;
	    }
	    
	    return ans ;
	}


};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.getCount(n) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends