class Solution {
public:
    int arrangeCoins(int n) {
                        // o(N) ;
        // int coin = 1 ;
        // while(n > 0){ // 2
        //     n -= coin; // 2 - 3 => -1
        //     coin ++ ; // 4    
        // }
        // return coin - 2;
                        
                        //o(logn);
        
//         int start = 1 , end = n ;
//         int ans = 0 ;
//         while(start <= end)
//         {
//             long long mid = start + (end - start) / 2;
//             long long tcoins = (mid * (mid +  1)) / 2;
//             if(tcoins <= n){
//                 ans = mid ;
//                 start =  mid + 1;
//             }
//             else{
//                 end = mid -1;
//             }
            
//         }
//         return ans ;
        
                        //Maths
        
        return (int)((-1 + sqrt(1 + 8 *1ll * n)) / 2) ; 
    }
};









