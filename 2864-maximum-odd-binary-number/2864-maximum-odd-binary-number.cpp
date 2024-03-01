class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zero = count(s.begin() , s.end() , '0');
        int one = count(s.begin() , s.end() , '1');
        
        string ans ;
        while(zero --){
            ans += '0';
        }
        
        while(one != 1){
            ans = '1' + ans ;
            one -- ;
        }
        ans += '1';
        // cout << ans << " "<< one << endl;
        return ans;
    }
};