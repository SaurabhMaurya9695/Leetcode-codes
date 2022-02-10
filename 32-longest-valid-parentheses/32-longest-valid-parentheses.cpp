class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        int maxLen = 0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                stk.push(i);
            } else {
                if(stk.size() > 0 && s[stk.top()] == '(')
                    stk.pop();
                else stk.push(i);
            }
            
            int j = (stk.size() == 0) ? -1 : stk.top();
            maxLen = max(maxLen, i - j);
        }
        return maxLen;
    }
};