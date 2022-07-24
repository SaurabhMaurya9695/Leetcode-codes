class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk ;
        string ans ="";
        for(auto c  : s)
        {
            if(c == '(')
            {
                if(stk.size() >  0)
                {
                    ans += c;
                }
                stk.push(c);
                
            }
            else {
                stk.pop();
                if(stk.size() > 0)
                {
                    ans += c;
                }
                
            }
        }
        return ans;
    }
};