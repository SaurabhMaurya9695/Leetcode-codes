//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    #define ll long long
    
    
    vector<ll> eval(vector<ll> & l , vector<ll>  & r , char & oper){
        vector<ll> curr(2 , 0)  ;
        if (oper == '&') {
            curr[0] = l[0] * r[0];
            curr[1] = l[0] * r[1] + l[1] * r[0] + l[1] * r[1];
        } else if (oper == '|') {
            curr[0] = l[0] * r[0] + l[0] * r[1] + l[1] * r[0];
            curr[1] = l[1] * r[1];
        } else if (oper == '^') {
            curr[0] = l[0] * r[1] + l[1] * r[0];
            curr[1] = l[0] * r[0] + l[1] * r[1];
        }

        curr[0] = curr[0] % 1003;
        curr[1] = curr[1] % 1003 ;
        return curr ;
    }
    
    
    vector<ll> solve(ll  left , ll  right  , ll  size ,  string & s , vector<vector<vector<ll >>> &dp ){
        if(left == right){
            if(s[left] == 'T'){
                return {1,0} ;
            }
            else{
                return {0,1};
            }
        }
        
        if(dp[left][right][0] != -1){
            return (dp[left][right]) ;
        }
        // do partition ;
        vector<ll> ans(2 , 0) ;
        for(ll cut = left + 1 ; cut < right ; cut += 2){
            vector<ll> leftArray  = solve(left , cut - 1 , size , s , dp);
            vector<ll> rightArray = solve(cut + 1 , right , size , s , dp);
            char oper = s[cut ] ;
            // now we have to evaluate the ans based on char ;
            vector<ll> res = eval(leftArray , rightArray , oper) ;
            ans[0] = (res[0] + ans[0]) % 1003;
            ans[1] = (res[1] + ans[1]) % 1003;
        }
        
        return  dp[left][right] = ans ;
        
    }
    int countWays(int n, string s){
        vector<vector<vector<ll >>> dp(n + 1 , vector<vector<ll >>(n + 1,vector<ll>(2 , -1))) ;
        vector<ll> ans = solve(0 , n - 1 , n , s ,dp) ;
        return ans[0];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends