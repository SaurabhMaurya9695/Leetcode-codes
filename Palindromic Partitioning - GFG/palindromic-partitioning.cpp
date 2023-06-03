//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int dp[501] ;
    bool ispalindrome(string &s){
        int n = s.size() ;
        for(int i = 0 ; i< n / 2;  i ++){
            if(s[i] != s[ n - i - 1]){
                return false;
            }
        }
        return true;
    }
    int solve(int i , int n , string s){
        
        if(i == s.size()){ // we make here one cut so we need to decrease 1
             return 0;
        }
        
        if(dp[i] != -1){
            return dp[i];
        }
        // make a possible cuts ;
        string temp = "";
        int ans = INT_MAX ;
        for(int j = i ; j < s.size() ; j ++){
            temp += s[j] ;
            if(ispalindrome(temp)){
                int cuts = 1 + solve(j + 1, n , s) ;
                ans = min(ans , cuts) ;
            }
            
            
        }
        
        return dp[i] = ans ;
    }
    
    int palindromicPartition(string s)
    {
        memset(dp ,-1 ,sizeof(dp)) ;
        return solve(0 , s.size() - 1 , s) - 1 ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends