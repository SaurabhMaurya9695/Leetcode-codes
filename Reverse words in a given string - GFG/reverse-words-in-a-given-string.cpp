//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string t ;
        string k ;
        for(int i = s.size() ; i >= 0 ; i --){
            k += s[i] ;
            if(s[i] == '.'){
                reverse(k.begin() , k.end());
                // cout << k << "\n";
                t += k;
                k += ".";
                k = "";
            }
        }
        
        
        reverse(k.begin() , k.end());
        t += "." + k;
        string ans(t.begin() +  1, t.end());
        return   ans ;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends