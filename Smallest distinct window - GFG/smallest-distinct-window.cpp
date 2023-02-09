//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int minWindow(string s, string t) {
        long long n = s.size() , m = t.size() ;
        unordered_map<char , long long > mp ;
        for(auto x : t) mp[x] ++ ;
        long long size = mp.size() ;
        long long ans = INT_MAX ;
        long long i = 0  , j = 0 ;
        int lsti = 0 ;
        string res;
        while(j < n)
        {
            mp[s[j]]--;
            if(mp[s[j]] == 0) {
                size -- ;
            }
            if(size == 0)
            {
                while(size == 0)
                {
                    if(ans > j - i + 1)
                    {
                        ans = min(ans , j - i  + 1);
                        lsti = i;
                    }
                    mp[s[i]]++;
                    if(mp[s[i]] == 1) size ++;
                    i++;
                }
            }
            j ++ ;
            
        }
        return (ans);
        
    }
    int findSubString(string str)
    {
        unordered_set<char > st ;
        for(auto x : str) st.insert(x) ;
        string ans ;
        for(auto x : st) ans += x;
        
        string s = str , t = ans ;
        return minWindow(s, t) ;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends