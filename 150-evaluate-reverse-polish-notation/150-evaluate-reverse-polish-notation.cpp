class Solution {
public:
    int evalRPN(vector<string>& s) {
        int n = s.size();
        stack<int> stk;
        for(int i = 0 ; i< n ; i++)
        {
            if(s[i] != "+" && s[i] != "-" && s[i] != "/" && s[i] != "*")
            {
                stk.push(stoi(s[i]));
            }
            else {
                if(s[i] == "+")
                {
                    int a = stk.top();
                    stk.pop();
                    int b = stk.top();
                    stk.pop();
                    int c = b + a;
                    stk.push(c);
                }
                else if(s[i] == "-")
                {
                    int a = stk.top();
                    stk.pop();
                    int b = stk.top();
                    stk.pop();
                    int  c = b - a;
                    stk.push(c);
                }
                else if(s[i] == "*")
                {
                    int a = stk.top();
                    stk.pop();
                    int b = stk.top();
                    stk.pop();
                    int  c = b * a;
                    stk.push(c);
                }
                else if(s[i] == "/")
                {
                    int a = stk.top();
                    stk.pop();
                    int b = stk.top();
                    stk.pop();
                    int  c = b / a;
                    stk.push(c);
                }
            }
        
        }
     return stk.top();
    }

};