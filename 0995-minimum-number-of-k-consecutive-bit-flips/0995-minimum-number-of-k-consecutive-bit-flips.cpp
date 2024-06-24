class Solution 
{
public:
    int minKBitFlips(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> is_flipped(n, 0);
        int flips = 0, flip_count = 0;

        for (int i = 0; i < n; ++i) 
        {
            if (i >= k) 
            {
                flip_count -= is_flipped[i - k];
            }
            if ((nums[i] + flip_count) % 2 == 0) 
            {
                if (i + k > n) 
                {
                    return -1;
                }
                flips++;
                flip_count++;
                is_flipped[i] = 1;
            }
        }
        return flips;
    }
};