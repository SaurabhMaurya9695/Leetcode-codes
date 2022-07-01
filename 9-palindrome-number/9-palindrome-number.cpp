class Solution {
public:
    
    bool solve(string S)
    {
        for (int i = 0; i < S.length() / 2; i++) {
            if (S[i] != S[S.length() - i - 1]) {
                return false;
            }
        }

        return true;
    }
    bool isPalindrome(int x) 
    {
        if(x < 0)
            return false;
        string s = to_string(x);
        return solve(s);
        
    }
};