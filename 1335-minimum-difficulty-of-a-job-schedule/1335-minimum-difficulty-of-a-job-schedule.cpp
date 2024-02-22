class Solution {
public:
   
    int minDifficulty(vector<int>& arr, int d) {
        // every task is dependent on each other 
        // we have options to choose 
        // d = 2
        // {6 }{5,4,3,2,1} ans for this is : max({6}) + max({5,4,3,2,1}) => 6 + 5 = 11 
        // {6,5}{4,3,2,1} ans for this is : max({6,5}) + max({4,3,2,1}) => 6 + 4 = 10 
        // {6,5,4}{3,2,1} ans for this is : max({6,5,4}) + max({3,2,1}) => 6 + 3 = 9
        // {6,5,4,3}{2,1} ans for this is : max({6,5,4,3}) + max({2,1}) => 6 + 2 = 8
        // {6,5,4,3,2}{1} ans for this is : max({6,5,4,3,2}) + max({1}) => 6 + 1 = 7
        
        int n = arr.size() ;
        if(d > n){
            return -1;
        }
        
        int dp[n + 1][d + 1];
        // dp the same as recursion 
        for(int i = 0 ; i< n ; i++){
            dp[i][1] = *max_element(begin(arr) + i, end(arr));
        }
        
        for (int days = 2; days <= d; days++) {
            for (int i = 0; i <= n - days; i++) {
                int maxDifficulty = INT_MIN;
                int result        = INT_MAX;

                for (int j = i; j <= n - days; j++) {
                    maxDifficulty   = max(maxDifficulty, arr[j]);
                    result          = min(result, maxDifficulty + dp[j + 1][days - 1]);
                }

                dp[i][days] = result;
            }
        }

        return dp[0][d];

    }
};