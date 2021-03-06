class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int reach = 0;
        for(int i = 0; i< nums.size() ; i++)
        {
            if(i > reach) // if our index is greator than the reach the return false;
                return false;
            if(i + nums[i] > reach) // means we get a better reach;
                reach = i + nums[i] ;
        }
        return true;
    }
    
};