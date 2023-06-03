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
    
    int minCut(string s) {
        int n = s.size() ;
        vector<int> dp (n + 1,  0) ;
        
        // base case 
        dp[n] = 0;
        for(int i = n- 1 ; i>= 0 ; i--){
            int minCost = INT_MAX ;
            string temp = "";
            for(int j = i ; j < s.size() ; j ++){
                temp += s[j] ;
                if(isPalindrome(temp) == true){
                    int cost = 1 + dp[j + 1] ;
                    minCost = min(minCost,  cost) ;
                }
            }
            dp[i] = minCost ;
        }
        
        return dp[0] - 1 ;
        
    }
};











