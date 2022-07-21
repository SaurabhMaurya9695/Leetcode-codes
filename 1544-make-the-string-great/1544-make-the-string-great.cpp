class Solution {
public:
    string makeGood(string s) {
        int n = s.size() ;
        stack<char> stk;
        for(int i = 0 ; i< n ; i++)
        {
            
            if(!stk.empty() && (abs(stk.top() - s[i]) == 32))
            {
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }
        string ans = "";
        while(!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};