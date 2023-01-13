class Solution {
    public int reverse(int n) {
        long  res = 0;
        while(n != 0 ){
            int rem = n % 10 ;// 3 , 2 , 1
            n = n / 10 ; // 12 , 1 , 0 
            res = res * 10 + rem ; // 3 ,  32 , 321 ;
        }
        
        if(res > Integer.MAX_VALUE  || res < Integer.MIN_VALUE){
            return 0 ;
        }
        else{
            return (int)res ;
        }
    }
}