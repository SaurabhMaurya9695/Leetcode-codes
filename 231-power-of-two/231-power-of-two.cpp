class Solution {
public:
    bool isPowerOfTwo(int n) {
        // base case ;
        if(n == 1) return true;
        if(n < 1) return false;
        return (n % 2 == 1) ?  false : isPowerOfTwo(n / 2);
    
    }
};