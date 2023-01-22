class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        vector<long long > left , right ;
        for(long long i = 0 ; i< s.size() ; i++)
        {
            long long x = s[i] - '0';
            if(i % 2 == 0) 
            {
                left.push_back(x);
            }
            else{
                right.push_back(x);
            }
        }
        long long sum = accumulate(left.begin() , left.end() , 0ll) ;
        long long sum2 = accumulate(right.begin() , right.end() , 0ll) ;
        // for(auto x : left) cout<< x << " ";
        // cout<< endl;
        return (sum - sum2) ;
    }
};