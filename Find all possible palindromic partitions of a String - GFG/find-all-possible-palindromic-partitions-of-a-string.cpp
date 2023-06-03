//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   bool isPalindrome(string &S)
    {
        for (int i = 0; i < S.length() / 2; i++)
        {
            if (S[i] != S[S.length() - i - 1])
            {
                return false;
            }
        }

        return true;
    }
    
    vector<vector<string>> res ;
    vector<string> ans;
    void solve(string s){
        if(s.size() == 0){
            res.push_back(ans);
            return ;
        }

        for(int i = 0 ; i< s.size() ; i ++){
            string left  = s.substr(0 , i + 1);
            string right = s.substr(i + 1 );
            if(isPalindrome(left) == true){
                ans.push_back(left);
                solve(right);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<string>> allPalindromicPerms(string s) {
         solve(s );
         return res ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends