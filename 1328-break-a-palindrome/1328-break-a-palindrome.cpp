class Solution {
public:
    
    string breakPalindrome(string s) 
    {
        int n = s.size() ;
        bool allsame = true;
        if(n <= 1)
        {
            return  "";
        }

        for(int i =  0 ; i < n / 2  ;  i++)
        {
            if(s[i] != 'a')
            {
                s[i] = 'a';
                allsame = false ;
                break;
            }
        }
        if(allsame == true)
        {
            s.pop_back();
            s = s + 'b';
            return s;
        }
        else{
            return s;
        }
        
    }
};