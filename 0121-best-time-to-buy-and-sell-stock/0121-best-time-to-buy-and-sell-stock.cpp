class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<int> suff(n);
        vector<int> pref(n);
        int minn = INT_MAX;
        int maxx = INT_MIN;

        for(int i=0 ; i<n ; i++){
            minn = min(minn , arr[i]);
            pref[i] = minn;
        }

        for(int i=n-1 ; i>=0 ; i--){
            maxx = max(maxx , arr[i]);
            suff[i] = maxx;
        }

        for(auto x : pref){
            cout << x << " ";
        }
        int ans = 0;
        for(int i=0 ; i<n-1;i++){
            ans = max(ans , suff[i+1]-pref[i]);
        }


        return ans;
    }
};