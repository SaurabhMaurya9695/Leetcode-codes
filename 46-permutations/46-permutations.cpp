// class Solution {
// public:
    
//     void solve(vector<int> & arr , vector<int> &ans , vector<vector<int>> &res , int idx , int n)
//     {
//          if(idx == n)
//          {
//              res.push_back(ans);
//              return  ;
//          }
        
//         // taking condition 
//         ans.push_back(arr[idx]) ;
//         solve(arr , ans, res , idx + 1 , n);
//         ans.pop_back();
//         ans.push_back(arr[idx]);
//         solve(arr, ans, res , idx + 1 , n);
        
        
        
//     }
//     vector<vector<int>> permute(vector<int>& arr) {
//         vector<int> ans;
//         vector<vector<int>> res ;
        
//         solve(arr , ans , res , 1 , arr.size() );
//         return res ;
//     }
// };



class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        do{
            
            result.push_back(nums);
            
        }while(next_permutation(nums.begin(),nums.end()));
        
        return result;
    }
};