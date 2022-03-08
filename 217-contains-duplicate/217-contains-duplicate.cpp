class Solution {
public:
    Solution() {
        iostream::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){return true;}
        }
        return false;
    }
};