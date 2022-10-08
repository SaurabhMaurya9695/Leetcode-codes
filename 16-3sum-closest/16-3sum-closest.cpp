class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int diff = INT_MAX,sum = 0;
        for(int i = 0;i < nums.size();i++)
        {
            int start = i+1;
            int end = nums.size()-1;
            while(start < end)
            {
                if(abs(nums[i] + nums[start] + nums[end] - target)< diff)
                {
                    diff = abs(nums[i] + nums[start] + nums[end] -target);
                    sum = nums[i] + nums[start] + nums[end];
                    cout << diff << " " << sum << endl;
                }
                    
                if(nums[i] + nums[start] + nums[end] == target)
                    return target;
                else if(nums[i] + nums[start] + nums[end] < target){
                    start++;
                }
                else if(nums[i] + nums[start] + nums[end] > target){
                    end--;
                }
            }
        }
        return sum;
    }
};