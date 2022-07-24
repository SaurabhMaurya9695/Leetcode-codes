class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size() ;
        stack<char> stk;
        string ans ="";
        for(int i = 0 ; i< n ; i++)
        {
            if(s[i] == '(')
            {
                if(stk.size() > 0)
                {
                    ans += s[i];
                }
                stk.push(s[i]);
            }
            else if(s[i] == ')')
            {
                stk.pop();
                if(stk.size() > 0)
                {
                    ans += s[i];
                }
                
            }
        }
        return ans ;
    }
};