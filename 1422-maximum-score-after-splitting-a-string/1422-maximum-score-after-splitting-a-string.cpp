class Solution {
public:
    int maxScore(string s) {
        int ans = INT_MIN;
        vector<int> pref(s.size() , 0);
        pref[0] = (s[0] == '0' ? 1 : 0) ;
        for(int i = 1; i < s.size() ; i ++) {
            pref[i] += pref[i-1] + (s[i] == '0' ? 1 : 0);
        }
        
        string t = s;
        reverse(s.begin() , s.end());
        vector<int> suff(s.size(), 0);
        suff[0] = (s[0] == '1' ? 1 : 0) ;
        for(int i = 1; i < s.size() ; i ++) {
            suff[i] += suff[i-1] + (s[i] == '1' ? 1 : 0);
        }
        reverse(suff.begin() , suff.end());
        
        for(int i = 0 ; i < s.size() - 1 ; i ++){
            ans=max(ans , pref[i] + suff[i + 1]);
        }
        
        return ans;
    }
};