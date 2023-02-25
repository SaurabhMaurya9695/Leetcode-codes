//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isPossibleToRead(int pages[] , int noofbooks ,  int maxLimit , int maxStudent){
        int curr_sum = 0 ;
        int curr_student =  1 ; // by default one student is reading now
        for(int i = 0 ; i < noofbooks && curr_student <= maxStudent; i ++){
            if(curr_sum + pages[i] <= maxLimit) // we have to read every time ;
            {
                curr_sum += pages[i]; // student 1- > 10, 20 ,30 , 40 mid= 58 ,
                //s1 ca read only 30
            }
            else{
                curr_student ++ ;
                curr_sum = pages[i] ; // 30
            }
        }
        if(curr_student > maxStudent) return false;
        else return true ;
    }
    
    
    
    //Function to find minimum number of pages.
    int findPages(int pages[], int noofbooks, int student) 
    {
        if(student > noofbooks) return -1;
        // *max_element(arr , arr + n) ;
        // one student can read max pages of books -> which is read by one student
        int start = *max_element(pages , pages + noofbooks) ;
        //our end is total sum -> s2 can readall the books 
        int sum = 0 ;
        for(int i = 0 ; i < noofbooks ; i ++){
            sum += pages[i];
        }
        int end = sum ;
        int ans = -1; // if no such mini value found 
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            // we gave the max load to every student to read only mid books 
            if(isPossibleToRead(pages , noofbooks ,  mid , student) == true){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
        
        
    }
};

//{ Driver Code Starts.

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