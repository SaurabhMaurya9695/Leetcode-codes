class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size() ;
       vector<int> dp (n + 1 , 1);
        // 1 length smallest LIS should be possible for each index ;
        for(int i = 0 ; i < n ; i ++) // for every idx;
        {
            for(int j = 0 ;j < i ; j ++){
                if(arr[i] > arr[j] ){ // current idx should be > then the previous idx 
                    dp[i] = max(dp[i] , dp[j] + 1) ; // take the max length from before
                }
            }
        }
        
        
        return *max_element(dp.begin() , dp.end()) ;
    }
};