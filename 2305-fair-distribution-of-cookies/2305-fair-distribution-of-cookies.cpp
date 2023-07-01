class Solution {
    int mini = INT_MAX;

    void distributeCookiesHelp(int ind, vector<int>& dp, vector<int>& cs) {
        if( ind == cs.size() ){
            mini = min(mini, *max_element(dp.begin(), dp.end()));
            return;
        } 

        for(int i=0; i<dp.size(); i++ ){
            dp[i] += cs[ind];
            distributeCookiesHelp(ind+1, dp, cs);
            dp[i] -= cs[ind];
        }
    }
public:
    int distributeCookies(vector<int>& cs, int k) {
        vector<int> dp(k, 0);
        distributeCookiesHelp(0, dp, cs);
        return mini;
    }
};