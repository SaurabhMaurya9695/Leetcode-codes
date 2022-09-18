class Solution {
public:
    int longestContinuousSubstring(string s) 
    {
        int n = s.size() ;
        int maxi = INT_MIN;
        int cnt = 1;
        if(n == 1) return 1;
        for(int i = 0 ; i< n - 1  ; i++)
        {
            int curr = s[i] - 'a';
            int next = s[i + 1] - 'a' ;
            if((next - curr) == 1)
            {
                cnt += 1;
            }
            else{
                cnt = 1;
            }
            maxi = max(maxi , cnt);
        }
        return maxi;
        
    }
};