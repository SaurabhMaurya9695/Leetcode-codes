//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(W + 1 , vector<int>(n + 1 , 0)) ;
       for(int item = 1; item <= n ; item++){
           for(int cap = 1; cap <= W ; cap ++){
               int no = dp[cap][item-1];
               int yes = (cap >= wt[item-1]) ? val[item - 1] + dp[cap - wt[item - 1]][item - 1] : -1 ;
               dp[cap][item] = max(no , yes);
           }
       }
       
       return dp[W][n] ;
    } 
};


//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends