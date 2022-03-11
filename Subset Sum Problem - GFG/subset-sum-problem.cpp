// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

bool isSubsetSum(int N, int arr[], int sum){
        vector<vector<int>> dp(N+1,vector<int>(sum+1,-1));
        return go(0,sum,dp,N,arr);
    }
    bool go(int index,int S,vector<vector<int>> &dp,int n,int arr[]){
        if(index>=n)
            return S==0;
        if(dp[index][S]!=-1)return dp[index][S];
        
        else dp[index][S]=go(index+1,S,dp,n,arr) || go(index+1,S-arr[index],dp,n,arr);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends