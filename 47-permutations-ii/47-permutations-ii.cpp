class Solution {
public: 
	void slove(vector<int> arr, set<vector<int>> &ans , int i)
	{
		if(i==arr.size())
		{
			ans.insert(arr);
			return ;
		}

		for(int j=i;j<arr.size();j++)
		{
			swap(arr[i],arr[j]);
			slove(arr, ans, i+1);

			//backtracking
			swap(arr[i], arr[j]);
		}
	}
	vector<vector<int>> permuteUnique(vector<int>& nums) {

		set<vector<int>> s;

		vector<vector<int>> ans ;

		slove(nums, s, 0);

		for(auto i:s)
			ans.push_back(i);
		return ans;
	}
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();