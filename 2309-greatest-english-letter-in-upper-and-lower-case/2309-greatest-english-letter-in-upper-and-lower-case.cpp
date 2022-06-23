class Solution {
public:
    string greatestLetter(string s) 
    {
        map<char, int> mp ;
        for(auto x : s)
        {
            mp[x]++;
        }
        string res = "";
        char ch1 = 'Z' , ch2 = 'z' ;
        for(int i = 0 ; i<26 ; i++)
        {
            if((mp.find(ch1) != mp.end()  ) && (mp.find(ch2) != mp.end()))
            {
                res += ch1 ;
                break;
            }
            ch1-- , ch2--;
            
        }
        return res ;
        
    }
};