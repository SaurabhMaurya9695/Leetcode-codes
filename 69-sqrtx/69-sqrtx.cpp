class Solution {
public:
    #define ll long long
    int mySqrt(int x) {
        ll left = 1;
        ll right = x;
        ll mid;
        while (left <= right){
            mid = (right - left) / 2 + left;
            if (x == mid * mid){
                return mid;
            }
            else if (x > mid * mid){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return right;
    }
};