class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0 ;
        int pro =  1;
        // int sum = 0 ;
        while(n > 0)
        {
            int r = n % 10 ;
            sum += r;
            pro = pro *  r;
            n =n / 10;
            
        }
        return (pro - sum) ;
        
    }
};