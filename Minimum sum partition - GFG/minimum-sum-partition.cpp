//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  
	int minDifference(int a[], int n)  { 
	    vector<int> arr(n);
	    for(int i = 0 ; i< n ; i ++) arr[i] = a[i] ;
        int total = 0;
        for (int val : arr)
            total += val;
    
        // Check Target Sum Subset with Space Optimization:
        // Time - O(N * Target), Space - O(Target)
    
        vector<bool> dp(total + 1);
        dp[0] = true; // Empty Subset to form 0 total
    
        for (int i = 1; i <= n; i++) {
            vector<bool> newdp(total + 1);
    
            for (int j = 0; j <= total; j++) {
                bool no = dp[j]; // No Call
                bool yes = (j >= arr[i - 1]) ? dp[j - arr[i - 1]] : false;
    
                newdp[j] = no || yes;
            }
    
            dp = newdp;
        }
    
        // first fill the dp table ;
        // Extra Work for this Variation - O(Total) Time, O(1) Space
        int half = (total + 1) / 2;
        for (int s1 = half; s1 <= total; s1++) {
            if (dp[s1] == true) {
                return (s1 - (total - s1));
            }
        }
    
        return total;

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

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends