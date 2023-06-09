class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        sort(arr.begin() , arr.end()) ;
        for(auto x : arr){
            if(x > target){
                return x; 
            }
        }
        return arr[0];
    }
};