class Solution {
public:
    bool sumOfNumberAndReverse(int nums) {
        for(int i = nums / 2; i <= nums ; i ++){
            string s = to_string(i);
            reverse(s.begin() , s.end());
            if(stoi(s) + i == nums){
                return true;
            }
        }
        
        return false;
    }
};