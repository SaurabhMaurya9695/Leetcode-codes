class Solution {
public:
    bool isPalindrome(string &S)
    {
        for (int i = 0; i < S.length() / 2; i++)
        {
            if (S[i] != S[S.length() - i - 1])
            {
                return false;
            }
        }

        return true;
    }
    
    int dp[2001] ;
    int solve(int i , string &s){
        
        if(i == s.size()){
            return  0 ;
        }
        
        if(dp[i] != -1){
            return dp[i] ;
        }
        int minCost = INT_MAX ;
        string temp = "";
        for(int j = i ; j < s.size() ; j ++){
            temp += s[j] ;
            if(isPalindrome(temp) == true){
                int cost = 1 + solve(j + 1, s);
                minCost = min(minCost,  cost) ;
            }
        }
        
        return dp[i] = minCost ;
    }
    int minCut(string s) {
        memset(dp ,-1 , sizeof(dp)) ;
        return solve(0 , s) - 1; 
    }
};