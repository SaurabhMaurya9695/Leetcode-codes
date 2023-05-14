//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    vector<int>dp( n + 1 , 1) ; //minimum length of sorted subsequnce is 1 ;
	    for(int i = 0 ; i < n ; i ++){
	        for(int j = 0 ; j < i; j ++){
	            if(arr[i] > arr[j] && dp[j] + 1 > dp[i]){
	                dp[i] = max(dp[i] , dp[j] + 1);
	            }
	        }
	    }
	    
	    int x =  *max_element(dp.begin() , dp.end()) ;
	    return  n - x ;
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

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends