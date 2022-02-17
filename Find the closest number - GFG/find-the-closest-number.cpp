// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int findClosest(int arr[], int n, int k) 
    {
    int s=0,e=n-1,m=s+(e-s)/2;
       int ans;
       while(s<=e)
       {
           if(arr[m]<=k)
           {
              ans=m;
              s=m+1;
           }
           else
           {
               e=m-1;
           }
           
           m=s+(e-s)/2;
       }
       int pd=abs(k-arr[ans]);
       int nd=abs(k-arr[ans+1]);
       if(pd>nd)
           return arr[ans+1];
       else if(nd>pd)
           return arr[ans];
       else
           return arr[ans+1];
       
   } 
};

// { Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}
  // } Driver Code Ends