class Solution {
public:
    bool isValid(string s) {
        stack<char>  stk;
        int n = s.size() ;
        for(int i = 0; i< n ; i++ )
        {
            if(s[i] == ')')
            {
                if(stk.size() == 0) return false;
                if(stk.top() == '(')
                {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == '}')
            {
                if(stk.size() == 0) return false;
                if(stk.top() == '{')
                {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == ']')
            {
                if(stk.size() == 0) return false;
                if(stk.top() == '[')
                {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else {
                // openins are coming ;
                stk.push(s[i]) ;
            }
        }
        if(stk.size()== 0)
            return true;
        else{
            return false;
        }
    }
};