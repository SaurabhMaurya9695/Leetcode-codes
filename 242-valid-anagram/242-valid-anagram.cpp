class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size() ;
        int m = t.size() ;
        if(n != m)
            return false;
        vector<int> cnt(26,0) ;
        for(int i = 0; i< n; i++)
        {
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }
        for(int i = 0 ; i< 26; i++)
        {
            if(cnt[i])
                return false;
        }
        return true;
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();

