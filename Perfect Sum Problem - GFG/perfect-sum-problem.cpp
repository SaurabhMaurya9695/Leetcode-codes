// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	const int mod = 1e7 ;
	int solve(int i , int target , int arr[] ,vector<vector<int>> &dp , int n )
	{
	    if (target < 0)
            return 0;
        if (i == n) {
            if (target == 0)
                return 1;
            return 0;
        }
        if (dp[i][target] != -1)
            return dp[i][target];

        int no = solve(i + 1, target, arr, dp , n);
        int yes = solve(i + 1, target - arr[i], arr, dp , n);
        return dp[i][target] = (no + yes) % 1000000007;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp (n + 1 , vector<int> (sum + 1 , -1)) ;
        return solve(0, sum, arr, dp , n) ;
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends