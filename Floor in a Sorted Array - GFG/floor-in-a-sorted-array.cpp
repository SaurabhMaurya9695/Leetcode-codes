//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    #define ll long long
    int findFloor(vector<long long> nums, long long n, long long target){
        
        if(nums[0] > target) return -1;
        if(nums[n -1] < target) return n - 1;
        ll start = 0 ;
        ll end = n - 1;
        int ans = -1;
        while(start <= end)
        {
            ll mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                return mid ;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
            // ans = start - 1;
        }
        return start - 1 ;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends