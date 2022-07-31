class Solution {
public:
string reverseParentheses(string s) {

    int n=s.size();
    stack<char> st;
    string res="";
    for(int i=0;i<n;i++)
    {
      
        if(s[i]==')')
        {
            while(st.top()!='(')
            {
                int c=st.top();
                res+=c;
                st.pop();
            }
            st.pop();
            int m=res.size();
            for(int i=0;i<m;i++)
            {
                cout<<res[i];
                st.push(res[i]);
            }
            res="";
            cout<<endl;
        }
        else
            st.push(s[i]);
    }

    while(!st.empty())
    {
        int c=st.top();
        res+=c;
        st.pop();   
    }
    reverse(res.begin(), res.end());
    return res;
}
};