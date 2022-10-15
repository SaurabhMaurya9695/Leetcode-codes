class Solution {
public:
    vector<string> commonChars(vector<string>& s) 
    {
        string temp = s[0] ;
        map<char , int > mp ;
        for(auto x : temp) mp[x]++;
        for(int i = 1 ; i< s.size() ; i++)
        {
            string ss = s[i];
            map<char , int > mpp ;
            for(auto y : ss) mpp[y] ++;
            for(auto xx : s[0])
            {
                mp[xx] = min(mp[xx] , mpp[xx]) ;
            }
        }
        vector<string> ans ;
        for(auto x : s[0] )
        {
            if(mp[x] > 0)
            {
                ans.push_back(string(1 , x));
                mp[x] --;
            }
        }
        return ans;
        
    }
};