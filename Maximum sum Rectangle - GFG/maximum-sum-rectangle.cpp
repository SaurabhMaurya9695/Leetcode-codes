//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    
    int maximumSumRectangle(int n, int m, vector<vector<int>> arr) {
        
        auto kadane = [&](vector<int> &temp){
            int curr_sum = temp[0] ;
            int overall_sum = temp[0] ;
            for(int i = 1 ; i< temp.size() ; i ++){
                if(curr_sum >= 0){
                    curr_sum += temp[i]; 
                }
                else{
                    curr_sum = temp[i] ;
                }
                
                overall_sum = max(overall_sum , curr_sum);
            }
            
            return overall_sum;
        };
        // code here
        int ans = INT_MIN ;
        for(int i = 0 ; i < n ; i ++){ // for n * (n + 1) / 2 submatrixes 
            vector<int> pref (m ) ;
            for(int j = i ;  j< n ; j ++){ // for jth row
                for(int val = 0 ; val < m ; val ++){
                    pref[val] += arr[j][val] ;
                }
                ans = max(ans , kadane(pref)) ;
            }
            
        }
        
        return ans ;
    }
    
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends