class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        // if the last diff is positive then we can't add the positive again
        // we need to add -ive this time , and if last diff is 
        // -ive then we have to add +ive .
        
        int n = nums.size() ;
        if(n < 2) {
            return n ;
        }
        
        int prev = nums[1] - nums[0] ; // if it is +ive then search for -ive or vice versa
        int cnt = (prev != 0 ? 2 : 1) ;// minimum 2 length subsequence should be present ;
        for(int i = 2 ; i < n ; i++){
            int diff = nums[i] - nums[i-1] ;
            if(diff > 0 && prev <= 0){
                cnt ++ ;
                prev = diff;
            }
            
            if(diff < 0 && prev >= 0){
                cnt ++ ;
                prev = diff;
            }
            
            // if both are same , prev and diff then just skip that element
            if((prev > 0 && diff > 0 ) or (prev < 0 && diff < 0)){
                continue;
            }
            
        }
        return cnt  ;
    }
};