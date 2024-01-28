class Solution {
public:
    
    #define ll long long
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size() ;
        map<int,int> mp;
        int sum = 0, cnt=0;
        mp[0] = 1;  // for handle negative cases -> {1 , -1} ;
        for(int i =0; i< n; i++)
        {
            sum += nums[i]; // add in the sum ;
            if(mp[sum -k]) // if we already found it before 
            {
                cnt += mp[sum- k]; // then for sure we have one subarray 
            }
            
             mp[sum]++;
        }
        return cnt ;
        
    }
};