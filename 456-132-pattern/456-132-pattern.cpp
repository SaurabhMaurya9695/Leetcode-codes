class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int s3 = INT_MIN;
        stack<int> s; //decreasing queue
        for(int i = nums.size() - 1; i >= 0; --i){
            if(nums[i] < s3){
                return true;
            }
            else{
                while(!s.empty() && nums[i] > nums[s.top()]){
                    s3 = nums[s.top()]; //s3 gets bigger every iteration cuz is a decreasing 
                    s.pop();
                }

                s.push(i);
            }
        }
        
        return false;
    }
};