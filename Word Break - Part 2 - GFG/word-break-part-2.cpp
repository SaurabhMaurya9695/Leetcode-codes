//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    unordered_set<string> st ;
    vector<string> ans ;
    void solve(int idx , string  s , vector<string> dict , string t ){
        // we have to make all the cuts. 
        
        if(idx == s.size()){
            ans.push_back(t.substr(0 , t.size() - 1));
            return ;
        }
        
        
        string res ;
        for(int i = idx ;i < s.size() ; i ++){
            res += s[i];
            if(st.find(res) != st.end()){
                //cout << res  << " "<< "t is :" << t <<  endl;
                solve(i + 1 , s , dict ,  t + res + " ");
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        for(auto &x : dict) {
            st.insert(x);
        }
        //inserted all the element in st ;
        //now make a call 
        solve(0 , s ,  dict , "");
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends