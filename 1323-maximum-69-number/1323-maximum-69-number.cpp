class Solution {
public:
    int maximum69Number (int num) 
    {
        string s = to_string(num);
        int fidx = 0 , lidx  = 0;
        for(int i = 0 ; i < s.size()  ; i++ )
        {
            if(s[i] == '6')
            {
                fidx = i;
                break;
            }
        }
        s[fidx] = '9';
        return stoi(s);
        
        
    }
};