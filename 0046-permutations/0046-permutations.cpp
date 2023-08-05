class Solution {
public:
    
    void solve(vector<int> ans , vector<vector<int>> & res , vector<int>nums , int idx){
        if(idx == nums.size()){
            // means all values filled ;
            res.push_back(ans);
            return ;
        }
        
        for(int i = 0 ; i < ans.size() ; i ++){
            //if not fille then we can fill ;
            if(ans[i] == 0){
                ans[i] = nums[idx] ;
                solve(ans , res , nums , idx + 1);
                ans[i] = 0 ;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans(nums.size() , 0);
        vector<vector<int>> res;
        solve(ans , res , nums , 0);
        set<vector<int>> st ;
        for(auto x : res) st.insert(x);
        vector<vector<int>> res1(st.begin() , st.end());
        return res1 ;
    }
};