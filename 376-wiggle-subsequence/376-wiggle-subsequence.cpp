class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        int n = nums.size() ;
        vector<int> inc(n + 1 ,1) ;
        vector<int> dec(n + 1 , 1) ;
        int maxLength = 0;
        for(int i=0; i<nums.size(); i++)
        {
            
            for(int j=0; j<i; j++)
            {
                if(nums[i] > nums[j])
                {
                    // We are Increasing
                    inc[i] = max(inc[i], dec[j] + 1);
                } 
                else if(nums[i] < nums[j])
                {
                    // We are Decreasing
                    dec[i] = max(dec[i], inc[j] + 1);
                }
            }
            
            maxLength = max(maxLength, max(inc[i], dec[i]));
        }
        return maxLength ;
    }
};