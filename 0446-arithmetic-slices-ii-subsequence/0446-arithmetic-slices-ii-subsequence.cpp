
class Solution {
public:
    #define ll long long 
	int numberOfArithmeticSlices(vector<int>& a) {
		ll ans = 0, n = a.size();
		vector<unordered_map<ll, ll>> dp(n); //declare a map of array 
        // every idx contain map 
		for (int i = 0; i < n; ++i) { // for every i
			for (int j = 0; j < i; ++j) { // asking from behind 
				ll diff = (ll)a[i] - (ll)a[j]; // taking a differnce 

				dp[i][diff]++; // increase the count of ith value 
				if (dp[j].count(diff)) { // check whether with the same differnce
                    // any value present on j 
                    // if present then add that count on ans 
                    // and including that value make ith value 
					dp[i][diff] += dp[j][diff];
					ans += dp[j][diff];
				}
                
			}
		}
		return ans;
	}
};

