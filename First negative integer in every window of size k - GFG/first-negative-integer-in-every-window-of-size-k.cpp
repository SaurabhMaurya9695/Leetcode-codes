//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

#define ll long long

vector<ll> printFirstNegativeInteger(ll int arr[], ll int N, ll int k) 
{
    int i = 0 , j = 0 ;
    ll n = N ;
    vector<ll > ans ;
    // we have to store our negative ele
    deque<ll > dq;
    while(j < n)
    {
        //cal 
        if(arr[j] < 0) dq.push_back(arr[j]) ;
        if(j - i  + 1 != k)
        {
            j ++ ;
        }
        else if(j - i + 1 == k ){
            if(dq.size() == 0) 
            {
                ans.push_back(0) ;
            }
            else
            {
                ans.push_back(dq.front()) ;
            }

            if(arr[i] < 0) {
                dq.pop_front() ;
            }
            i ++ ;
            j ++ ;
        }
    }
    
    return ans ;
}