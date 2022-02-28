// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
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
    public:
    //Function to find minimum number of pages.
    int findPages(int pages[], int books , int students)
    {
        int start = *max_element(pages, pages + books) ;// min no of pages can read by student
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
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends