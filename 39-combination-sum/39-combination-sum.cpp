class Solution {
public:
    // made tree for visualizing code 
    
    
    void solve(int id, int sum, vector<int>&num, vector<vector<int>>&ans, vector<int>&ds )
    {
        // base case 
        if(id== num.size()){
            if(sum ==0)
               ans.push_back(ds); 
            return ; 
        }
        if(sum >= num[id]){
            ds.push_back(num[id]); 
            solve(id, sum-num[id], num, ans, ds); // if we take that element then  our target should be decreases by the arr[idx] ;
            ds.pop_back(); 
        }
        solve(id+1, sum, num, ans, ds); // else sum not be subtracted ; 
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int sum) {
        vector<vector<int>> ans; 
        vector<int>ds; 
        
        solve(0, sum, arr, ans, ds);
        return ans;
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();