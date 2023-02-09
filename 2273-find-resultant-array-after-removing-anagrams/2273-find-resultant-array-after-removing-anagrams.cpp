class Solution {
public:
    
    bool check(string s,  string t)
    {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        return s == t ;
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans ;
        ans.push_back(words[0]) ;
        string ok = words[0];
        for(int i = 1; i < words.size() ; i ++)
        {
            if(check(ok , words[i]) == true)
            {
                continue;
            }
            else{
                ok = words[i];
                ans.push_back(words[i]) ;
            }
        }
        return ans ;
    }
};