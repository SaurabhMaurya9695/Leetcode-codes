class Solution {
public:
    
    string  check(string s)
    {
        sort(s.begin() , s.end());
        return s ;
    }
    vector<string> removeAnagrams(vector<string>& s) 
    {
       int n = s.size() ;
        vector<string> ans ;
        ans.push_back(s[0]) ;
        string prev = s[0];
        for(int i  = 1   ; i < n ; i++)
        {
            if(check(prev)  == check(s[i])) // anagram ;
            {
                continue;
            }
            else{
                prev = s[i];
                ans.push_back(s[i]);
            }
        }
        return ans ;
        
    }
};