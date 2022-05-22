// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int> dp (n + 1) ; 
	    int ans = 0 ; // to store ans 
	    for(int i = 0 ; i< n; i ++)
	    {
	        dp[i] = arr[i] ; // if we take none then we store arr[i] ;
	        for(int j = 0; j < i ; j ++) // ask  from the previous can we take or not
	        {
	            if(arr[j] < arr[i]) // if prev is 
	            {
	                dp[i] = max(dp[i] , dp[j] + arr[i]); // take the max till now and max
	            }
	        }
	        ans = max(ans , dp[i]) ; // take an ans;
	    }
	    return ans ;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends