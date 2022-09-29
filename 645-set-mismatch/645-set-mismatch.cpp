class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int array[10001] = {},ans[2] = {};
        
        for(int i=0;i<nums.size();i++)
        {
            array[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(array[i] == 2)
                ans[0] = i;
            if(array[i] == 0)
                ans[1] = i;
        }
        return {ans[0],ans[1]};
    }
};