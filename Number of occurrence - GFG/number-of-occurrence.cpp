//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
int lower_bound(vector<int> arr , int target)
    {
        int n = arr.size() ;
        int low = 0 , high =  n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low ) / 2;
            if(arr[mid]  == target){
                ans = mid ; // we have to check in left
                high = mid -1 ;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
                
        }
        return ans ;
    }
int upper_bound(vector<int> arr , int target)
    {
        int n = arr.size() ;
        int low = 0 , high =  n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low ) / 2;
            if(arr[mid]  == target){
                ans = mid ; // we have to check in right
                low = mid + 1;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans ;
    }
	int count(int arr[], int n, int x) {
	    vector<int> temp (n) ;
	    for(int i = 0  ; i < n ;i ++){
	        temp[i] = arr[i];
	    }
	    
	    
	    int fidx = lower_bound(temp , x ) ;
	    int lidx = upper_bound(temp , x);
	    int ans = lidx - fidx  + 1 ;
	    return  (fidx >= 0 && lidx >= 0 ) ? ans : 0 ;
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
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends