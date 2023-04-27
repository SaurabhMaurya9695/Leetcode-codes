//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    

    bool is_possible_to_get_seats(int n, int m, vector<int>& s){
        int placed = 0;
        int i = 0;
        while(i<m)
        {
            int left  = (i== 0) ? 0: s[i-1];
            int right = (i==m-1) ? 0: s[i+1];
            if (s[i] == 0 && left+right== 0) {
                placed++;
                i+=2;
            } 
            else
                i++;
        }
        return placed >= n ;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends