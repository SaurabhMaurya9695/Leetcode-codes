class Solution {
public:
    int superPow(int a, vector<int>& b) {
        long long B=0;
        for(int i=0 ; i< b.size(); i++){
            B = ((B*10)+b[i])%1140;
        }
        
        int ans =1;
        while(B){
            if(B&1){
                ans= (ans * 1ll * a)%1337;
                B--;
            }else{
                a =( a* 1ll * a)%1337;
                B>>=1;
            }
        }
        return ans;
    }
};