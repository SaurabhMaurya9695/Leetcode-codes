//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	#define ll long long
	int findMaxSubarraySum(ll arr[], ll n, ll k)
	{
        ll i = 0 , j = 0 ;
        ll ans = INT_MIN;
        ll sum = 0 ;
        while(j < n){
            sum += arr[j] ;
            if(sum > k){
                while(sum > k)
                {
                    sum -= arr[i];
                    i++;
                }
                if(sum <=k){
                    ans = max(ans , sum );
                }
                j ++ ;
            }
            else if (sum <= k){
                ans =max(ans , sum);
                j++;
            }
        }
        return (ans == INT_MIN) ? 0 : ans ;
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
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends