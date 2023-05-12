//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
	public:
		int LongestRepeatingSubsequence(string s){
		    int n = s.size() ;
		    vector<vector<int>> dp(n + 1, vector<int>(n + 1 , 0));
		    for(int i = n - 1 ; i>= 0 ; i --){
		        for(int j = n - 1; j >= 0 ; j--){
		            char x = s[i];
		            char y = s[j];
		            if(x == y && i != j){
		                dp[i][j] = 1 + dp[i+1][j+1];
		            }
		            else{
		                dp[i][j] = max(dp[i][j+1] , dp[i+1][j]);
		            }
		        }
		    }
		    
		    return dp[0][0];
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends