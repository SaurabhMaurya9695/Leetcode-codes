//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k);

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends

#define ll long long 

long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
    // maxSum[i] is going to store maximum sum
    // till index i such that a[i] is part of the
    // sum.
    ll maxSum[n];
    maxSum[0] = a[0];
 
    // We use Kadane's algorithm to fill maxSum[]
    // Below code is taken from method 3 of
    // https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
    ll curr_max = a[0];
    for (ll i = 1; i < n; i++)
    {
        curr_max = max(a[i], curr_max+a[i]);
        maxSum[i] = curr_max;
    }
 
    // Sum of first k elements
    ll sum = 0;
    for (ll i = 0; i < k; i++)
        sum += a[i];
 
    // Use the concept of sliding window
    ll result = sum;
    for (ll i = k; i < n; i++)
    {
        // Compute sum of k elements ending
        // with a[i].
        sum = sum + a[i] - a[i-k];
 
        // Update result if required
        result = max(result, sum);
 
        // Include maximum sum till [i-k] also
        // if it increases overall max.
        result = max(result, sum + maxSum[i-k]);
    }
    return result;
}