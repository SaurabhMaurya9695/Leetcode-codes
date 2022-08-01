class Solution {
public:
    int minSwaps(string s) {
        int n = s.size() ;
        int open  = 0;
        int ans = 0;
        for(auto ch : s)
        {
            if(ch == '[')
            {
                open++;
            }
            else{
                if(open > 0){
                    open--;  
                } 
                else{
                    ans++;
                }
            }
        }
        
        return (ans % 2 == 1) ? (ans / 2) + 1 : ans / 2 ;
    }
};