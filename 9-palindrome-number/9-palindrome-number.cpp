class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        else{
            string s = to_string(x);
            reverse(s.begin(), s.end());
            return (s==to_string(x));
        }
    }
};