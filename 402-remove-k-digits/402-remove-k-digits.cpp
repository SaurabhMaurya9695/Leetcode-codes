class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        if( k == 0)
        {
            return num;
        }
        
        if(num.size() == k or num.size() == 0)
        {
            return "0";
        }
        
        stack<char> stk;
        
        for(int i=0; i<num.size(); i++)
        {
            while(k>0 and stk.size()>0 and stk.top() > num[i])
            {
                k--;
                stk.pop();
            }
            
            stk.push(num[i]);
        }
        
        while(k>0 and stk.size()>0)
        {
            k--;
            stk.pop();
        }
        
        // All elements now in stack, so now make string
        string str = "";
        
        while(!stk.empty())
        {
            str.push_back(stk.top()); stk.pop();
        }
        
        
        reverse(str.begin(), str.end());
        
        // possibility of leading zeros
        int d=0;
        int len = str.size();
        while(d<str.size())
        {
            if(str[d] == '0')
            {
                d++;
            }
            else
            {
                break;
            }
        }
        
        if(d == str.size())
        {
            return "0";
        }
        string ans = str.substr(d);
        
            
        return ans;
    }
};