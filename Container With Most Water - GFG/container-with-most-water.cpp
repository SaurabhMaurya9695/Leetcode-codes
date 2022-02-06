// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++
#define ll long long
long long maxArea(long long a[], int len)
{
    if(len == 1) return 0 ;
    ll start =0 ;
    ll end = len - 1;
    ll ans = INT_MIN ;
    while(start < end)
    {
        ll h1 = a[start];
        ll h2 = a[end];
        ll h = min(h1, h2);
        ans = max(ans , h * (end-  start)) ;
        if(h1 < h2)
        {
            start++;
        }
        else{
            end--;
        }
    }
    return ans ;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends