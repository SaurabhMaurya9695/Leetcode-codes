class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i = 0 ; i< nums.size()  ; i++)
        {
            if(abs(nums[i] - i) > 1) return false;
        }
        return true;
    }
};

// if all numbers in asending order 
// 0 1 2 3  -> no inversion ;
// 3 2 1 0 -> max number of invesion ; 

// we have to check that the diff between i and i - 1 < 1 ;