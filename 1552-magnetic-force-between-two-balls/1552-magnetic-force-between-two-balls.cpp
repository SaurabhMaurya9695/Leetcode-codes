class Solution {
public:
    
    bool isPossible(int d, vector<int> &stalls, int c, int n){
	int placed = 1, placedAt = stalls[0];
	for(int i=1; i<n; i++){
		if(placedAt+d <= stalls[i]){
			placed++;
			placedAt = stalls[i];
		}
	}
	if(placed >= c)
		return true;
	return false;
}
    
    
    int maxDistance(vector<int>& stalls, int m) {
        sort(stalls.begin(), stalls.end());
        int n = stalls.size() ;
		int low = 1, high = stalls[n-1] - stalls[0];
		int ans = 1;
		while(low<=high)
        {
			int mid = low + (high - low)/2;
			if(isPossible(mid, stalls, m, n)){
				ans = mid;
				low = mid + 1;
			}else{
				high = mid - 1;
			}
		}
        return ans ;
    }
};