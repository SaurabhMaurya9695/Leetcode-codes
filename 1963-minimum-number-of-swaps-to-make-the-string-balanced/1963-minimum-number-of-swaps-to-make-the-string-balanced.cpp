class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int count = 0;
        //remove all balanced paranthesis
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '[')
                st.push(s[i]);
            else
            {
                if(!st.empty() && st.top() == '[')
                    st.pop();
                else
                    count++;
            }
        }
        //remaining only unbalanced paranthesis
        int ans = (count + 1) / 2;
        return ans;
    }
};