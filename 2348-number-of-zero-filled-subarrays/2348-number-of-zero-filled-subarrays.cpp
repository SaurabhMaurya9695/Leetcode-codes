class Solution {
public:
    #define ll long long
    long long zeroFilledSubarray(vector<int>& nums) {
        ll ans = 0 , cnt = 0;
        for(int i = 0 ;i < nums.size() ; i ++)
        {
            if(nums[i] == 0){
                cnt ++ ;
            }
            else{
                cout << cnt << endl;
                ans += cnt * (cnt  + 1) / 2 ;
                cnt = 0 ;
            }
        }
        if(cnt == nums.size() ){
            //means all zero ;
             ans += cnt * (cnt  + 1) / 2 ;
             return ans ;
        }
        
        cnt = 0 ;
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            if(nums[i] == 0){
                cnt ++ ;
            }
            else{
                ans += cnt * (cnt  + 1) / 2 ;
                break;
            }
        }
        return ans ;
    }
};