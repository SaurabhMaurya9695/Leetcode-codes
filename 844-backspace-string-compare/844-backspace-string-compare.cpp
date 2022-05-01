class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char > st1 ;
        stack<char> st2 ;
        for(auto c : s)
        {
            if(c == '#')
            {
                if(st1.size() > 0)
                {
                    st1.pop();
                }
            }
            else{
                st1.push(c) ;
            }
        }
        for(auto c : t)
        {
            if(c == '#')
            {
                if(st2.size() > 0)
                {
                    st2.pop();
                }
            }
            else{
                st2.push(c) ;
            }
        }
        string ans1 = "";
        while(st1.size() != 0)
        {
            ans1 += st1.top() ;
            st1.pop() ;
        }
        cout<< ans1 ;
        string ans2 = "";
        while(st2.size() != 0)
        {
            ans2 += st2.top() ;
            st2.pop() ;
        }
        cout<< ans2 ;
        return (ans1 == ans2) ;
        
    }
};