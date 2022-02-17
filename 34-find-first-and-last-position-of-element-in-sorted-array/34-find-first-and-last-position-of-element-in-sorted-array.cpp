class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int k) {
        vector<int> ans;
        if(binary_search(arr.begin() , arr.end() , k))
        {
            ans.push_back(lower_bound(arr.begin(), arr.end() , k) - arr.begin());
            ans.push_back(upper_bound(arr.begin() , arr.end() ,k) - arr.begin() - 1);
            return ans;
        }
        else{
            return {-1,-1};
        }
    }
};