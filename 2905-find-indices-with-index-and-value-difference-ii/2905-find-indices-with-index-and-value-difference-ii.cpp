class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        //5,1,4,1 => 5 6 10 11
        //5,1,4,1 => 11 6 5 1
        int n = nums.size() ;
        // nums[i] - nums[j] >= valueDifference .. it should be greator / equal_to then valueDifference
        // so we have to find the max and mi value at every point ;
        vector<pair<int,int>> max_suff(n) , min_suff(n);
        int maxi = 0, mini = INT_MAX, x = -1, y = -1;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(nums[i] > maxi){
                maxi = nums[i];
                x = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                y = i;
            }
            min_suff[i] = {mini, y};
            max_suff[i] = {maxi, x};
        }
        // for(auto [l, r] : max_suff){
        //     cout << "(" << l << "," << r << ")";
        // }
        // cout <<"\n";
        // for(auto [l, r] : min_suff){
        //     cout << "(" << l << "," << r << ")";
        // }
        // cout <<"\n";
        
        for(int i = 0 ; i < n ; i++){
            int j = indexDifference + i;
            if(j >= n)
                break;
            if(abs(nums[i] - min_suff[j].first) >= valueDifference)
                return {i, min_suff[j].second};
            if(abs(nums[i] - max_suff[j].first) >= valueDifference)
                return {i, max_suff[j].second};
        }
        return {-1,-1};
        
        
    }
};