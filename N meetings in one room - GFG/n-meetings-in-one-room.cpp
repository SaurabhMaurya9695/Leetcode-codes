//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> vp ;
        for(int i = 0 ; i< n ; i ++){
            vp.push_back({start[i] , end[i]});
        }
        
        sort(vp.begin() , vp.end() , [&](pair<int,int>a, pair<int,int> b){
           return a.second < b.second;
        });
        
        int cnt = 1 ;
        int ans = vp[0].second;
        for(int i = 1 ; i< vp.size() ;i ++){
            if(vp[i].first > ans ){
                cnt++;
                ans = vp[i].second;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends