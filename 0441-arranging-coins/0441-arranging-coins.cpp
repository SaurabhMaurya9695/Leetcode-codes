class Solution {
public:
    int arrangeCoins(int n) {
        int coin = 1 ;
        while(n > 0){
            coin ++ ;
            n -= coin;
            
        }
        return coin - 1;
    }
};