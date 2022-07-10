// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    
        int sum(int n){
           int cnt=0;
           while(n){
               cnt+=n%10;
               n=n/10;
           }
           return cnt;
       }
        long long int numberCount(long long int N, long long int K)
        {
            int count=0;
            for(int i=1;i<=N;i++){
                long long int ans=sum(i);
                if(i-ans>=K){
                    count++;
                }
            }
            return count;
        }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends