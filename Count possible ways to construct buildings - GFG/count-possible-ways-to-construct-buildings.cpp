// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int solve(vector<int> &dp,int n)
    {
            if(n == 0){
                return 1 ;
            }
             if(n == 1){
                return 2 ;
            }
            if(n == 2) 
                return 3;
            if(dp[n] != -1){
                return dp[n] ;
            }
            return dp[n] = ( solve(dp,n-2) % (1000000007) + solve(dp,n-1) % (1000000007) ) % (1000000007) ;
    }
	int TotalWays(int n)
	{
	   //for n = 3 -> possiblities are given in sample question ,TOTAL => 5
	   //for n = 4 -> BSSS , BSBS , BSSB , SBSS , SBSB , SSSB , SSBS , SSSS = >TOTAL -> 8
	   //this sequence is just like the fibonacci sequence 
	   vector<int> dp(n + 1 , -1) ;
	   long long ans =  solve(dp , n) % (1000000007)  ;
	   return ((ans* ans * 1LL) % (1000000007) ) ;
	   
	   
	   
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends