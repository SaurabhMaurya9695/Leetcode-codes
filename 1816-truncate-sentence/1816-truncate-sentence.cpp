class Solution {
public:
    string truncateSentence(string s, int k)
    {
        int cnt = 0 , i = 0;
        for(auto x : s)
        {
            if(x== ' ')
            {
                cnt++;
            }
            if(cnt == k)
                break;
            i++;
        }
        return s.substr(0,i) ;
        
    }
};