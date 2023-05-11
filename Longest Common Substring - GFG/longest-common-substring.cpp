//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    // int solve(string s , string t , int n , int m , int i , int j){
        
    //     if(i == n || j == m){
    //         return 0;
    //     }
    //     char ch1 = s[i];
    //     char ch2 = s[j];
        
    //     if(ch1 == ch2){
    //         return 1 + solve(s, t , n , m , i + 1 , j + 1);
    //     }
    //     else{
    //         return 0 ;
    //     }
    // }
    
    int longestCommonSubstr (string s, string t , int n, int m)
    {
        // return solve(S1,S2 , n , m , 0 , 0);
        vector<vector<int>> dp ( n + 1 , vector<int>(m + 1 , 0)) ;
        int maxLCSS = 0;
        for(int i = n - 1 ; i>= 0 ; i--){
            for(int j = m - 1; j >= 0 ; j--){
                if(s[i] == t[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }
                
                maxLCSS = max(maxLCSS , dp[i][j]);
            }
            
        }
        
        return maxLCSS;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends