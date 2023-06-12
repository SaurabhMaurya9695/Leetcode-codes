class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size() ;
        string ans ;
        vector<string> arr ;
        for(int i = 0 ; i < n ; i ++){
            int j = i + 1;
            while(j < n && nums[j] == nums[j-1] + 1){
                j ++ ;
            }
            
            if(nums[i] != nums[j -1])
            {
                ans = ans + to_string(nums[i]) + "->" + to_string(nums[j - 1]) ;
            }
            else{
                ans = ans + to_string(nums[i]) ;
            }
            i= j - 1;
            arr.push_back(ans) ;
            ans = "" ;
            
        }
        
        return arr ;
    }
};