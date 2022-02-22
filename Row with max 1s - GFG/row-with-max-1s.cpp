// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

    int transitionPoint(vector<int> arr , int left, int right) {
        int ans = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == 0) {
                left = mid + 1;
            } else {
                ans = mid;
                right = mid - 1;
            }
        }

        return ans;
    }
    
	int rowWithMax1s(vector<vector<int> > arr, int n, int m)
	{
	    int right = m - 1;
        int ans = -1, noOfOnes = 0;
        for (int i = 0; i < n; i++) {
            int transitionPt = transitionPoint(arr[i], 0, right);
            if (transitionPt != -1 && m - transitionPt > noOfOnes) {
                ans = i;
                noOfOnes = m - transitionPt;
                right = transitionPt - 1;
            }
        }
        return ans;
	}

};

// { Driver Code Starts.
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