class Solution {
public:
    int minSubArrayLen(int k, vector<int>& arr) {
        int n = arr.size() ;
        int i = 0 , j = 0 ;
        int ans = INT_MAX;
        int sum = 0 ;
        while(j < n){
            sum += arr[j] ;
            if(sum < k){
                j ++ ;
            }
            else if (sum >= k){
                while(sum >= k){
                    ans = min(ans , j - i + 1);
                    sum -= arr[i];
                    i ++ ;
                }
                j++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans ;
    }
};