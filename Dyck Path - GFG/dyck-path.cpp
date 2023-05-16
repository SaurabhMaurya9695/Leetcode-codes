//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  #define ll long long 
    long long dyckPaths(int n) {
        vector<ll > catalan(n + 1 ) ;
        catalan[0] = 1;
        catalan[1] = 1;
        // to find nth catalan number 
        for(int i = 2 ; i <= n; i ++){
            for(int j = 0 ; j < i ; j ++){
                catalan[i] += catalan[j] * catalan[i - j - 1] ;
            }
        }
        return catalan[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.dyckPaths(N) << endl;
    }
    return 0;
}
// } Driver Code Ends