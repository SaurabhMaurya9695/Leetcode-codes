class Solution {
public:
	int maxProfit(vector<int>& arr) {
	   int n = arr.size();

	   // pref[i] : maximum buying and selling profit till ith position
	   // suff[i] : maximum buying and selling profit from ith to n position
	   vector<int> pref(n) , suff(n);

	   int best_sell = arr[0];
	   for(int i=1;i<n;i++){
		   best_sell = min(best_sell , arr[i]);
		   pref[i] = max(pref[i-1] , arr[i] - best_sell); 
	   }

	   best_sell = arr[n-1];
	   for(int i=n-2;i>=0;i--){
		  best_sell = max(best_sell , arr[i]);
		  suff[i] = max(suff[i+1] , best_sell - arr[i]);
	   }

	   // find maximum of all i position 
	   int ans = 0;
	   for(int i=0;i<n;i++){
		   ans = max(ans , pref[i] + suff[i]);
	   }  
	   return ans;
	}
};