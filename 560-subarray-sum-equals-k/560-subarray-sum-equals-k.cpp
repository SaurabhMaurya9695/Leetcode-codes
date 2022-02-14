class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size() ;
        map<int,int> mp;
        int sum = 0, cnt=0;
        mp[0] = 1;
        for(int i =0; i< n; i++)
        {
            sum += nums[i];
            if(mp[sum -k])
            {
                cnt += mp[sum- k];
            }
            
             mp[sum]++;
        }
        return cnt ;
        
    }
};