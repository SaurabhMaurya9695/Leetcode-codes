class Solution {
public:
    bool check(vector<int>& candies, long long k, long long mid) {
        long long split = 0;
        for(int i = 0; i < candies.size(); ++i) {
            split += candies[i]/mid;
        }   
        return split>=k;
    }
    
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = 0;
        for(int i = 0; i < candies.size(); ++i) {
            sum += candies[i];
        }
        
        long long start = 1, end = sum;
        long long ans = 0;
        
        while(start <= end) {
            long long mid = (start + end)/2;
            if(check(candies, k, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid-1;
            }
        }
        return ans;
    }
};