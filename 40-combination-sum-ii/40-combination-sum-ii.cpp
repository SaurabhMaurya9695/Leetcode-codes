class Solution {
    void combinations(int ind,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds)
    {
        // for more know in detail make a recursion tree 
        // base case 
        
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        // loop from idx to size
        
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind&& arr[i]==arr[i-1]) continue;  // if next element is same  ;
            
            if(arr[i]>target)break;
            
            //pick condition ..
            ds.push_back(arr[i]);
            combinations(i+1,target-arr[i],arr,ans,ds); 
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(0,target,candidates,ans,ds);
        return ans;
    }
};