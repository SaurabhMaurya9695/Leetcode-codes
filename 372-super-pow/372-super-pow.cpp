class Solution {
public:
    
    long long binExp(long long a,long long b,int m){
        int ans=1;
        while(b){
            if(b&1){
                ans=(ans*a)%m;
            }
            a=(a*a)%m;
            b>>=1;
        }
        return ans;
    }
    
    
    
    
    int superPow(int a, vector<int>& b) {
        int pow=0;
        for(auto value:b){
            pow=(pow*10+value)%1140;
        }
        return binExp(a,pow,1337);
    }
};