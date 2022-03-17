class Solution {
public:
        void combinations(int ind , int target, int k ,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds)
    {
        // for more know in detail make a recursion tree 
        // base case 
        
        if(target==0 && (k == ds.size()))
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
            combinations(i+1,target-arr[i], k,arr,ans,ds); 
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates =  {1,2,3,4,5,6,7,8,9} ;
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(0,n , k ,candidates,ans,ds);
        return ans;
    }
};