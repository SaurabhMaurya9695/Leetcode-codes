class Solution {
public:
    bool func(string &s,string &p,int i,int j,vector<vector<int>> &dp){
        //Base Case :- If my pattern string is consumed then check that my input string is consumed or not.
        if(j == p.size())return i == s.size();
        
        //If my input string is consumed then check for the pattern string that it contains all *'s or not.
        if(i == s.size())return p[j] == '*' && func(s,p,i,j+1,dp);
        
        //If i already stored the result then return it, no need to compute it again.
        if(dp[i][j] != -1)return dp[i][j];
        
        //If we found a match or p[j] == '?' then increment the pointers
        if(s[i] == p[j] || p[j] == '?')
            return dp[i][j] = func(s,p,i+1,j+1,dp);
        
        //If we found a '*' then we have two conditions: take or not
        if(p[j] == '*')
            return dp[i][j] = func(s,p,i,j+1,dp) | func(s,p,i+1,j,dp);
        return false;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size(),vector<int>(p.size(),-1));
        return func(s,p,0,0,dp);
    }
};