//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool solve(vector<int>& arr, int n , int t) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < arr.size() ;i  ++)
        {
            mp[arr[i]] = i ;
        }
        vector<int> ans ;
        bool ok = false;
        for(int i = 0  ;i < arr.size() ; i ++)
        {
            if(mp.find(t - arr[i]) != mp.end())
            {
                if(i == mp[t - arr[i]]) continue;
                // else{
                // ans.push_back(i) ;
                // ans.push_back(mp[t - arr[i]]);
                // break;
                // }
                ok = true;
                break;
            }
        }
        return ok ; 
        
    }
	bool hasArrayTwoCandidates(int nums[], int n, int x) {
	    vector<int> arr(n) ;
	    for(int i = 0 ; i < n ;i ++)
	    {
	        arr[i] = nums[i] ;
	    }
	    
	    return solve(arr , n , x) ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends