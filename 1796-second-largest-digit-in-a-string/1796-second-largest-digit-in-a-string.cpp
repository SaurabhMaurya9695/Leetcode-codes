class Solution {
public:
    int secondHighest(string s) 
    {
        int n= s.size() ;
        set<int> st ;
        int res = -1;
        int cntz = 0;
        for(int i = 0; i< n ; i++)
        {
            if(s[i] >= '1' && s[i] <='9')
            {
                st.insert((s[i] - '0')) ;
            }
            else if(s[i] == '0')
            {
                cntz ++;
            }
            else{
                continue;
            }
        }
        
        vector<int> ans2(st.begin()  , st.end()) ;
        if(ans2.size() == 1 )
        {
            if(cntz > 0)
                return 0 ;
            else{
                return res ;
            }
        }
        else if(ans2.size() == 0)
            return -1;
        else{
            return ans2[ans2.size() - 2] ;
        }
        // return 1;
        
    }
};