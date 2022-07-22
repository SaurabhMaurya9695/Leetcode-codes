class Solution {
public:
    int evalRPN(vector<string>& A) {
         stack<int>s;
    for(string p:A)
    {
        if(p!="+" and p!="*" and p!="-" and p!="/")
        {
            s.push(stoi(p));
        }
        else
        {
            if(p=="+")
            {
                int b=s.top();s.pop();
                int a=s.top();s.pop();
                int c = a+b;
                s.push(c);
            }
            else if (p=="-")
            {
                int b=s.top();s.pop();
                int a=s.top();s.pop();
                int c = a-b;
                s.push(c);
            }
            else if (p=="*")
            {
                int b=s.top();s.pop();
                int a=s.top();s.pop();
                int c = a*b;
                s.push(c);
            }
            else
            {
                int b=s.top();s.pop();
                int a=s.top();s.pop();
                int c = a/b;
                s.push(c);
            }
            
        }
    }
    return s.top();
        
    }
};