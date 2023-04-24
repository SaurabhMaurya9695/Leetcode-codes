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
        vector<vector<int>> dp(N + 1 , vector<int>(W + 1 , 0)) ;
        // we are doing tabulation of 1st approach , in which we are choosing one item
        // many number of times unit our capacity become zero;
        // we are choosing one item on one level so our dp is filling (your choice) row
        // by row first for first item , then second item
        //   0 1 2 3 4 5 6 7 8
        // 0 0 0 0 0 0 0 0 0 0
//(1,1) // 1 0
//(3,4) // 2 0
//(4,5) // 3 0 
        // .
        // .
        
        // if capacity is zero then all zero ;
        // if we is zero then all are zero ;
        // now filling from the first col = 1, row = 1;
        for(int item =1 ; item <= N ; item ++){
            for(int cap =1; cap <= W ; cap ++){
                int yes = (cap >= wt[item - 1] ) 
                        ? dp[item][cap - wt[item - 1]] + val[item - 1] 
                        : -1 ;
                int no = dp[item - 1 ][cap];
                
                dp[item][cap] = max(yes , no);
            }
        }
        
        return dp[N][W  ];
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