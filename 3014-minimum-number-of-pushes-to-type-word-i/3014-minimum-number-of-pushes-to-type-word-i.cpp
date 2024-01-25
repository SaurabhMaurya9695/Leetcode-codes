class Solution {
public:
    int minimumPushes(string s) {
       
        map<int , int > mp ;
        int k = 2;
        int cnt = 0;
        for(int i = 0 ;i < s.size() ; i ++ ){
            
            if(mp[k] >= 1){
                mp[k] ++ ;
                cnt += mp[k];
            }
            else{
                mp[k]++;
                cnt += mp[k] ;
                
            }
            k ++ ;
            if(k > 9){
                k = 2;
            }
        }
        
        return cnt;
    }
};