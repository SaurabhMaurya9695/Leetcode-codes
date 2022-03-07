class Solution {
public:
    double solve(double x, long n){
        if(n == 0) return 1;
        double temp = solve(x, n/2);
        double ans = temp * temp;
        if(n%2) ans *= x;
        return ans;
    }
    
    double myPow(double x, int n) {
        long nn = n;
        if(nn<0) nn *= -1;
        double ans = solve(x, nn);
        if(n < 0){
            return 1/ans;
        }
        return ans;
    }
};