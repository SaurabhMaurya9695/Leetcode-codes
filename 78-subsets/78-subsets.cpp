class Solution {
    public:
    void solve(vector<int> & nums, int idx, vector<vector<int>>& result)
    {
        // we are at last index;
        if(idx == nums.size()-1){
            result.push_back({});
            result.push_back({nums[idx]});
        }
        else{
            solve(nums , idx + 1, result);
            int n = result.size();
            for(int i=0;i<n;i++)
            {
                vector<int> r = result[i];
                r.push_back(nums[idx]);
                result.push_back(r);
            }
        }
    }
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> result;
        if(nums.size() == 0) return result;
        solve(nums, 0 , result);
        return result;
    }
};