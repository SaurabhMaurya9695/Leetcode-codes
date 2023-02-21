class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int flip = 0 ;
        int i = 0 , j = 0 ;
        int n = nums.size() ; 
        int ans = 0;
        while(j < n){
            if(nums[j] == 0){
                flip ++ ;
                // j++;
            }
                while(flip > k){
                    if(nums[i] == 0){
                        flip --;
                    }
                    i ++ ;
                }

            ans = max(ans , j - i + 1) ;
            j++;
        }
        return ans ;
    }
};