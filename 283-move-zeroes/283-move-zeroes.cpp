class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int cnt = 0;
        for(int i =0 ; i< n; i++)
        {
            if(nums[i] == 0)
            {
                cnt++;
            }
        }
        vector<int> v;
        for(int i = 0 ; i<  n; i++)
        {
            if(nums[i] != 0)
            {
                v.push_back(nums[i]);
            }
        }
        while(cnt--)
        {
            v.push_back(0);
        }
        for(int i = 0 ; i< n ; i++)
        {
            nums[i] = v[i];
        }
    }
};