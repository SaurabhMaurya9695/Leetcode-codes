class Solution {
public:
    #define ll long long
    int countOdds(int low, int high) {
        // vector<ll> ans;
        // while(low<= high)    //tle
        // {
        //     ans.push_back(low);
        //     low++;
        // }
        // ll cnt = 0 ;
        // for(ll x : ans)
        // {
        //     if(x % 2 != 0)
        //     {
        //         cnt++;
        //     }
        // }
        // return cnt;
        
        
                // Method 2; 
        // int x = (high - low + 1) ;
        // if(low % 2 == 0 &&  high % 2 == 0)
        // {
        //     if(low == high)
        //         return 0;
        //     return x / 2 ;
        // }
        // else if (low % 2 == 1 &&  high % 2==1)
        // {
        //     if(low == high)
        //         return 1;
        //     return 2 + (x -2) / 2 ;
        // }
        // else //if(low % 2 == 0 & high % 2 ==1)
        // {
        //     return (x+ 1) / 2;
        // }
        
        
                    // Method 3;
        return low%2==0 && high%2==0 ? (high-low)/2 : (high-low)/2 + 1;
        
    }
};