class Solution {
public:
    string convertToBase7(int num) {
        int ans = 0;
        int c = 0;
        while(abs(num) > 0){
            ans += (num % 7) * pow(10,c++);
            cout<< (num%7) << endl;
            num /= 7;
        }
        return to_string(ans);
    }
};