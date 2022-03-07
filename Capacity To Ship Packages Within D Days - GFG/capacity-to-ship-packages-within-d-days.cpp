// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  
           bool isPossible(int pages[] , int books, int maxLoad, int totalStud){
        int currStud = 1, currPages = 0;

        for(int i=0; currStud <= totalStud && i<books; i++){

            if(currPages + pages[i] <= maxLoad){
                currPages += pages[i];
            } else {
                currStud++;
                currPages = pages[i];
            }

        }

        if(currStud > totalStud) return false;
        return true;
    }
    
    int findPages(int pages[] , int books , int students)
    {
        int start = *max_element(pages , pages + books) ;// min no of pages can read by student
        int sum = 0 ;
        int n = books ;
        for(int i =0 ; i< n; i++)
        {
            sum += pages[i];
        }
        int high = sum ;
        int ans = -1;
        while(start <= high)
        {
            int mid = start + ( high -  start) / 2;
            if(isPossible(pages, books, mid, students) == true) // is should be a possible ans;
            {
                ans = mid;
                high = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return ans;
    }
    int leastWeightCapacity(int arr[], int N, int days) {
        int n =N ;
        int x = findPages(arr , n ,  days) ;
        return x;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends