//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    #define ll long long 
    long long findMinDiff(vector<ll> a, ll n, ll m){
        sort(a.begin() , a.end()) ;
        // 1 3 4 7 9 9 12 56
        ll ans = INT_MAX;
        int i = 0 , j = 0;
        while(j < n){
            if(j - i + 1 != m){
                j ++ ;
            }
            else{
                ans = min(ans , a[j] - a[i]);
                i ++ ;
                j ++ ;
            }
        }
        
        return ans ;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends