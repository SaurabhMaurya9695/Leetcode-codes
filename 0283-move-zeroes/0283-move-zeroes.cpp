class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        
        //i = partition pointer, all the values left from curr pointer will be not equal to 0
        //j = forward pointer to check values
        int i = 0;
        int j = 0;
        while(j < nums.size()){
            if(nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
            }
            j++;
        }
        
        while(i < nums.size()){
            nums[i] = 0;
            i++;
        }
        
    }
};