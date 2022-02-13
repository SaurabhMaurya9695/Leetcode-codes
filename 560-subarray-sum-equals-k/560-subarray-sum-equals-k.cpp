class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        map<int,int> hash;
        hash[0]=1;
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum+=nums[i];
            if(hash[sum-k])
                count+=hash[sum-k];
            hash[sum]++;
        }
        return count;
    }
};