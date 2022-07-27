class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0;
        stack<char> stk;
        int n = s.size();
        for(int i = 0 ; i <  n ;i++)
        {
            if(s[i] == ')')
            {
                if(stk.size() > 0 && stk.top() == '(')
                {
                    stk.pop();
                }
                else {
                    stk.push(s[i]);
                }
            }
            else{
                stk.push(s[i]);
            }
        }
        return stk.size() ;
        
    }
};