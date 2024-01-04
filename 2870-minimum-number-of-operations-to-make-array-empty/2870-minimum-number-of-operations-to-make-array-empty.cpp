class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp ;
        for(auto x : nums){
            mp[x]++;
        }
        
        int ans = 0 ;
            
        for(auto &[f,s] : mp){
            cout << f << " " <<s << "\n";
            if(s == 1){
                return -1;
            }
            else {
                if(s % 3 == 0){
                    ans += (s / 3);
                }else{
                    while(s >= 0){
                        s = s - 3;
                        ans ++ ;
                        if(s < 0){
                            s += 3;
                            ans --;
                            break;
                        }
                    }
                    if(s == 1){
                        s += 3;
                        ans --;
                    }
                    ans += (s / 2);
                    
                    // cout << s << "->" << ans << endl;
                }
            }
        }
        
        return ans ;
    }
};