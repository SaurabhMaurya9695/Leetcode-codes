class Solution {
public:
    int minimumRecolors(string s, int k) {
        int i = 0 , j = 0;
        int n = s.size() ;
        int cnt_b = 0 , cnt_w = 0 , ans = INT_MAX;
        while(j < n){
            //cal
                if(s[j] == 'B') cnt_b ++;
                else cnt_w ++;
                if(j - i  + 1 != k){
                    j ++ ;
                }
                else if(j - i + 1 == k){
                    // ans ;
                   // cout<< cnt_b << " " << cnt_w <<endl;
                    if(cnt_b == k){ 
                        return 0 ;
                    }
                    ans = min(ans , cnt_w);
                    // cout<<"ans is" << ans << endl;
                    if(s[i] == 'B') cnt_b -= 1;
                    else cnt_w -= 1;
                    i ++ ;
                    j ++;
            }
        }
        return ans ;
    }
};