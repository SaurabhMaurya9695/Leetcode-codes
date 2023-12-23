class Solution {
public:
    int minPartitions(string s) {
        int ans = INT_MIN ;
        for(int i = 0 ; i< s.size() ; i ++ ){
            ans = max(ans , s[i] -'0');
        }
        return ans ;
    }
};