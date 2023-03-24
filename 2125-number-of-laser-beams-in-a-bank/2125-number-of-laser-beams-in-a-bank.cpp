class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        auto cntOnes = [&] (string s){
            int cnt_one = 0 ;
            for(int i = 0 ; i < s.size() ; i ++){
                if(s[i] == '1'){
                    cnt_one ++ ;
                }   
            }
            
            return cnt_one ;
        };
        
        string s = bank[0] ;
        int ans = 0 ;
        int PreZero = cntOnes(s) ;
        // cout << PreZero
        for(int i = 1 ; i < bank.size() ; i ++){
            int nextRowZeros = cntOnes(bank[i]) ;
            cout << nextRowZeros << " ";
            if(nextRowZeros > 0){
                ans += PreZero * nextRowZeros;
                PreZero = nextRowZeros;
            }
            
        }
        
        return ans ;
    }
};