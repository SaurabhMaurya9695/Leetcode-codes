class Solution {
public:
    string interpret(string s) 
    {
        int n=s.size();
        
        string t;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!='(' && s[i]!=')') // check if both of the  char is not '(' or ')' ;
            {
                t.push_back(s[i]);
            }
            if(s[i]=='(' && s[i+1]==')')
            {
                t.push_back('o');
            }
        }
        
        if(s[n-1]!=')')
        {
            t.push_back(s[n-1]);
        }
        
        return t;
    }
};