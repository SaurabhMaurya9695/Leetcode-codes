class Solution {
public:
    
    void solve(int n , vector<string>&ans , string s ,int open , int close , int idx)
    {
        if(idx == 2 * n)
        {
            ans.push_back(s);
            return ;
        }
        //open class ;
        if(open < n)
        {
            solve(n , ans , s + "(" , open + 1 , close , idx + 1);
        }
        if(open > close)
        {
            solve(n , ans , s + ")" , open  , close  + 1, idx + 1);
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        solve(n, ans , "" ,0 , 0 , 0);
        return ans;
        
    }
};