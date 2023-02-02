class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        // |nums[i] - nums[j]| == k 
        // nums[i] - nums[j] = k  || -nums[i] + nums[j] = k
        // nums[j] = nums[i] - k  || nums[i] + k ;
        // x +  y = k
        int cnt = 0 ;
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            if(mp.find(arr[i] +k) != mp.end())
            {
                cnt += mp[arr[i] + k] ;
            }
            if(mp.find(arr[i] - k) != mp.end())
            {
                cnt += mp[arr[i] - k] ;
            }
            mp[arr[i]] ++;
        }
        return cnt ;
    }
};