class Solution {
public:
    
    int giveSqrt(int x){
        int start = 1 ;
        int end = x;
        while(start <= end){
            long long  mid = start + (end - start) / 2;
            if(mid ==  x / mid){
                return  mid ;
            }
            else if(mid * mid > x){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return end ;
        
    }
    
    int mySqrt(int x) {
        // return (int)sqrt(x) ;
        return giveSqrt(x);
    }
};