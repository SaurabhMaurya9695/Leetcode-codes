

class Solution {
public:
    #define ll long long 
    int firstBadVersion(int n) {
        ll low = 1 , high =  n ;
        ll ans = -1;
        while(low <= high){
            ll mid = (low + high) / 2;
            if(isBadVersion(mid) == false){
                low = mid + 1;
            }
            else   {
                ans = mid;
                //we have to check in left to find another tp ;
                high = mid - 1;
            }
        }
        return ans ;    
    }
};