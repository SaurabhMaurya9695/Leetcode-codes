//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    
    int solve(vector<int> arr , int start , int end){
        // first transistion point idx 
        int ans = -1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(arr[mid] == 1){
                ans = mid ;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans  ;
        
    }
    
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int res = -1 ;
	    int currone = 0 ;
	    for(int i = 0 ; i < n ; i ++){
	       int ftranidx = solve(arr[i] , 0, m - 1);
	       if(ftranidx != -1){
	           int one = m - ftranidx ;
	           if(one > currone){
	               currone = one ;
	               res = i ;
	           }
	       }
	       else{
	           continue;
	       }
	    }
	    return res ;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends