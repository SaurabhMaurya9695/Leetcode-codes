class Solution {
public:
    
    bool isPal(string S)
    {
        for (int i = 0; i < S.length() / 2; i++) {
            if (S[i] != S[S.length() - i - 1]) {
                return false;
            }
        }

        return true;
    }
    bool isPalindrome(string s) {
        int n = s.size() ;
        string ans = "";
        for(auto x : s)
        {
            if(x >='a' && x<='z')
            {
                ans += x;
            }
            else if(x>='A' && x<='Z')
            {
                ans += x;
            }
            else if(x>='0' && x <='9')
            {
                ans += x;
            }
            else{
                continue;
            }
        }
        for(int i = 0; i< ans.size() ; i++)
        {
            if(ans[i] >='A' && ans[i] <='Z')
            {
                ans[i] =ans[i] + 32 ;
            }
        }
         cout<< ans<< "\n";

        return isPal(ans) ;
    }
};