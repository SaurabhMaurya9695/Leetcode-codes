class Solution {
public:
    int longestPalindrome(vector<string>& s) {
        unordered_map<string , int > mp;
        for(auto x : s) mp[x]++;
        int ans = 0 ;
        bool flag = false;
        for(auto x : mp)
        {
            string t = x.first ;
            string tt =  t;
            reverse(tt.begin() , tt.end());
            if(t == tt)  //aa // bb // cc ;
            {
                ans += x.second / 2 ;
                if(x.second % 2 == 1)
                {
                    flag = true;
                }
            }
            else{
                if(mp.count(tt))
                {
                    ans += min(x.second , mp[tt]) ;
                    mp.erase(tt);
                }
            }
        }
        ans *= 4;
        if(flag  )
        {
            ans += 2;
        }
        return ans ;
    }
};