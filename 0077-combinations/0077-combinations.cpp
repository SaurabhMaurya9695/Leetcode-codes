class Solution {
public:
    
    void solve(int n , int k , vector<int>&ans , vector<vector<int>> & res , int item , int currbox)
    {
        if(currbox ==  n)
        {
            if(ans.size() == k)
            {
                res.push_back(ans);
            }
            return ;
        }
        
        // yes
        ans.push_back(item);
        solve(n ,  k , ans, res , item + 1 , currbox + 1);
        ans.pop_back();
        
        //no
        // we are not adding in the ans now
        solve(n ,  k , ans, res , item + 1 , currbox + 1);
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(n , k , ans, res , 1 , 0);
        return res;
    }
};