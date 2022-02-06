// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int maxWater(int arr[], int n) {
           int leftMax = 0, rightMax = 0;
        int left = 0, right = n - 1, water = 0;
        
        while(left <= right){
            
            if(arr[left] <= arr[right]){
                if(arr[left] < leftMax) water += (leftMax - arr[left]);
                else leftMax = arr[left];
                left++;
            } else {
                if(arr[right] < rightMax) water += (rightMax - arr[right]);
                else rightMax = arr[right];
                right--;
            }   
        }
        
        return water; 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxWater(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends