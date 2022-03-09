class Solution {
public:
    
    void solve(int idx , vector<int>& ans  , int n , vector<int> arr , set<vector<int>> &st)
    {
        // base case;
        
        if(idx == n)
        {
            st.insert(ans);
            return ;
        }
        // take condition 
        
        ans.push_back(arr[idx]) ;
        solve(idx + 1 , ans , n , arr ,st);
        
        // / untake condition
        ans.pop_back() ;
        solve(idx + 1 , ans , n , arr ,st) ;
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        set<vector<int>> st;
        sort(nums.begin() , nums.end()) ;
        solve( 0, ans , nums.size() , nums , st);
        vector<vector<int>> res;
        for(auto x : st)
        {
            res.push_back(x);
        }
        return res ;
    }
};