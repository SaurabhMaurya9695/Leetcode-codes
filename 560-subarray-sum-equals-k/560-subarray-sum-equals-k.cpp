class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        map<int,int> mp;
        int sum = 0 , cnt = 0;
        mp[0] = 1 ;
        for(int i = 0; i< n; i++)
        {
            sum += arr[i];
            if(mp[sum - k])
            {
                cnt += mp[sum- k];
            }
            mp[sum]++;
        }
        return cnt ;
        
    }
};