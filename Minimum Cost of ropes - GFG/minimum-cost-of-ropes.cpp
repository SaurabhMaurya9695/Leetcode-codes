//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    #define ll long long
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
         priority_queue<ll , vector<ll> , greater<ll> > pq;
        for(int i = 0; i < n ; i ++) pq.push( arr[i]);
        ll sum = 0 ;
        while(pq.size() != 1){
            ll x = pq.top();
            pq.pop();
            ll y = pq.top() ;
            pq.pop();
            pq.push(x + y);
            sum +=(x + y); 
            
            
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends