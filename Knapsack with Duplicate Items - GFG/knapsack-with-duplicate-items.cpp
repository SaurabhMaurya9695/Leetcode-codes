//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<int> dp(W + 1);
        for(int item =1 ; item <= N ; item ++){
            for(int cap =1; cap <= W ; cap ++){
                int yes = (cap >= wt[item - 1] ) 
                        ? dp[cap - wt[item - 1]] + val[item - 1] 
                        : -1 ;
                int no = dp[cap];
                
                dp[cap] = max(yes , no);
            }
        }
        
        return dp[W  ];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends