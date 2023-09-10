class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> vis(102 , 0); 
        for(int i = 0 ; i < nums.size() ; i ++){
            vis[nums[i][0]] += 1;
            vis[nums[i][1] + 1] -= 1;
        }
        
        int ans = 0 ;
        for(int i = 1; i <= 100 ; i ++){
            vis[i] += vis[i-1];
            ans += (vis[i] > 0);
        }
        
        return ans ;
    }
};