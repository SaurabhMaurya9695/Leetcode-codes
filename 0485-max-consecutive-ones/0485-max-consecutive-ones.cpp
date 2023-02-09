class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxi = 0;
        for(auto it: nums){
            if(it==0) count = 0;
            else{
                count++;
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};