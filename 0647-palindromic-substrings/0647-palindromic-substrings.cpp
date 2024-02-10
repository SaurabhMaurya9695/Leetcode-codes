class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size() ;
        
        auto isPalindrome = [&](string &S)->bool{
            for (int i = 0; i < S.length() / 2; i++){
                if (S[i] != S[S.length() - i - 1]){
                    return false;
                }
            }
            return true;
        };
        
        int cnt = 0;
        for(int i = 0 ; i < n ; i ++){
            string t ;
            for(int j = i ; j < n ; j ++){
                t += s[j];
                cnt += (isPalindrome(t));
            }
        }
        return cnt;
    }
};