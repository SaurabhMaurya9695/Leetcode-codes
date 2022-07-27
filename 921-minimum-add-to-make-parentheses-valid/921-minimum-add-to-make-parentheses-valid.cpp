class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                        st.pop();
                }
                else
                    st.push(s[i]);
            }
            
        }
        while(!st.empty()){
            st.pop();
            count++;
        }
        return count;
    }
};