class Solution {
public:
    
    int arrayNesting(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(auto x : nums){
            mp[x] = false;
        }
        
        int ans = INT_MIN , cnt = 0 ;
        for(int i = 0;i < nums.size() ; i ++){
            while(mp[nums[i]] == false){
                cnt ++ ;
                mp[nums[i]] = true;
                i = nums[i] ;
            }
            ans = max(ans , cnt) ;
            cnt = 0;
        }
        
        return ans ;
    }
};