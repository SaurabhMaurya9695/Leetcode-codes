class Solution {
public:
    
    bool check(char ch){
        if(ch =='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        else if(ch == 'A' || ch == 'I' || ch=='O' || ch=='E' || ch =='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int left = 0 , right = s.size() - 1;
        while(left < right){
            if( (check(s[left]) == true) && (check(s[right]) == true) ) {
                swap(s[left] , s[right]);
                left++;
                right--;
            }
            else if( (check(s[left]) == true) && (check(s[right]) == false ) ){
                right--;
            }
            else {
                left++;
            }
        }
        return s;
    }
};