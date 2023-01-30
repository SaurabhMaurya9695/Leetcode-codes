class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < arr.size() ;i  ++)
        {
            mp[arr[i]] = i ;
        }
        vector<int> ans ;
        for(int i = 0  ;i < arr.size() ; i ++)
        {
            if(mp.find(t - arr[i]) != mp.end())
            {
                if(i == mp[t - arr[i]]) continue;
                else{
                ans.push_back(i) ;
                ans.push_back(mp[t - arr[i]]);
                break;
                }
            }
        }
        return ans ; 
        
    }
};