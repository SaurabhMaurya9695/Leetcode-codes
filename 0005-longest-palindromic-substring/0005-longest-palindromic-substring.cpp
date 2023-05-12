class Solution {
public:
    string ans = "";
    void expand(string &s , int left ,int right)
    {
        while(left >= 0 &&  right < s.size()) // go on left and right 
        {
            if(s[left] != s[right])  // unitl this condition meets
                break;
            left--,right++;
        }
        
        if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
    }
    string longestPalindrome(string s) {
        
        int n =s.size() ;
        for(int i = 0 ; i < n ; i++)
        {
            expand(s , i , i);  // for even partion 
            expand(s , i , i+1); // for odd partion 
        }
        return ans;
    }
};