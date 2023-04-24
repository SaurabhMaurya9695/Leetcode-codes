//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int dp[1001][1001];
    int solve(int N, int cap, int val[], int wt[] , int idx){
        if(idx == N){
            return 0;
        }
        
        if(cap == 0){
            return 0 ;
        }
        
        if(dp[idx][cap] != -1){
            return dp[idx][cap];
        }
        // every items has two possibilty 
        // to take in bage or not , if we take in bag then we can again give the same choice 
        // to that item , 
        int yes = (cap >= wt[idx] ) ? solve(N , cap - wt[idx] ,val ,  wt , idx) + val[idx] : -1 ;
        int no = solve(N , cap , val , wt , idx + 1 ) ;
        
        return dp[idx][cap] = max(yes, no) ;
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp , -1 , sizeof(dp)) ;
        return solve(N , W, val , wt , 0) ;
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