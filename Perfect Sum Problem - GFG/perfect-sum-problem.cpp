// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	const int mod = 1e7 ;
// 	int solve(int i , int target , int arr[] ,vector<vector<int>> &dp , int n )
// 	{
// 	    if (target < 0)
//             return 0;
//         if (i == n) {
//             if (target == 0)
//                 return 1;
//             return 0;
//         }
//         if (dp[i][target] != -1)
//             return dp[i][target];

//         int no = solve(i + 1, target, arr, dp , n);
//         int yes = solve(i + 1, target - arr[i], arr, dp , n);
//         return dp[i][target] = (no + yes) % 1000000007;
// 	}

// tabulation
    
    int tab(int arr[] , int n , int sum)
    {
       long long m = 1e9 + 7;
    
        int t[n+1][sum+1];

       // base condition 
        for (int i = 0; i < n+1; i++)
        {
            for (int j = 0; j < sum+1; j++)
            {
               if(i==0){
                   t[i][j] = 0;
               }
               if(j==0){
                   t[i][j] = 1;
               }
            }
            
        }

       // main condition and code
        for (int i = 1; i < n+1; i++)
        {   // j started from zero to handle extra zeroes at end and special testcase
        
        // here is special part j = 0
            for (int j = 0; j < sum+1; j++)
            {   
                if(arr[i-1]<=j){
                    // we just plus it and we have used modulo here because the sum may be very large 
                    t[i][j] = (t[i-1][j-arr[i-1]]%m  +  t[i-1][j]%m )%m;
                }else{
                    t[i][j] = t[i-1][j]%m;
                }
            }
            
        }
        // returning
        return t[n][sum];
}
	
	int perfectSum(int arr[], int n, int sum)
	{
        // vector<vector<int>> dp (n + 1 , vector<int> (sum + 1 , -1)) ;
        // return solve(0, sum, arr, dp , n) ;
        return tab(arr , n , sum) ;
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