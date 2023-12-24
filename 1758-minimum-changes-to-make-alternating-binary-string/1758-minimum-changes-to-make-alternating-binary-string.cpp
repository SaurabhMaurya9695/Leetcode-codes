class Solution {
public:
    int minOperations(string s) {
        int n = s.size() ;
        int next = 0 ;
        int zero = 0 , one = 0 ;
        for(int i = 0;i< n ; i ++){
            if(i % 2 == 0){ // 0
                if(s[i] == '0'){
                    zero ++ ;
                }else{
                    next ++;
                }
            }
            else{
                if(s[i] == '1'){
                    one ++ ;
                }else{
                    next ++;
                }
            }
        }
        
        int next2 = 0;
        for(int i = 0;i< n ; i ++){
            if(i % 2 == 0){ // 0
                if(s[i] == '1'){
                    one ++ ;
                }else{
                    next2 ++;
                }
            }
            else{
                if(s[i] == '0'){
                    zero ++ ;
                }else{
                    next2 ++;
                }
            }
        }
        // cout << next2 <<" " << next << endl;
        return (next == s.size() || next2==s.size() ) ?  0 : min(next,next2)  ;
    }
};