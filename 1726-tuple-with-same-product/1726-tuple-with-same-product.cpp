class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        //first we have to find the all pairs of multiples 
        int n = nums.size() ;
        unordered_map<int,int > mp;
        for(int i = 0 ; i < n ; i ++){
            for(int j = i  +1 ; j < n ; j ++){
                int prod = nums[i] * nums[j] ;
                mp[prod] ++ ;
            }
        }
        int ans = 0 ;
        for(auto x :  mp){
            if(x.second > 1){
                // 4n(n-1)
                int pairs = x.second ;
                ans += 4 * (pairs) *(pairs - 1);
            }
        }
        return ans ;
    }
};