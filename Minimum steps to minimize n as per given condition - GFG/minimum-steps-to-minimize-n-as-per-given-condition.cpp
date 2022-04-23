// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public :
    	int help(vector<int> &dp,int n)
    	{
            if(n==1)
            {
                return 0;
            }
            if(dp[n]!=-1)
            {
                return dp[n];
            }
            int l= help(dp,n-1)+1;
            int m=INT_MAX,r=INT_MAX;
            if(n>=2 && n%2==0)
            {
                m=help(dp,n/2)+1;
            }
            if(n>=3 && n%3==0)
            {
                r=help(dp,n/3)+1;
            }
            return dp[n]=min(l,min(m,r));
    }
    int minSteps(int N) 
    { 
        // Your code goes here
        vector<int> dp(N+1,-1);
        return help(dp,N);
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

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends