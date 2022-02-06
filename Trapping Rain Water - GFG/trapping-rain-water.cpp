// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long leftMax = 0, rightMax = 0;
        long long left = 0, right = n - 1, water = 0;
        
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

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends