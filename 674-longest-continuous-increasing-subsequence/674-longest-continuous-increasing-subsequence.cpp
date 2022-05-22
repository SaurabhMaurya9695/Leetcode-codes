class Solution {
public:
    int findLengthOfLCIS(vector<int>& arr) {
        int ans = 0 ;
        int res =INT_MIN;
        int n = arr.size() ;
        for(int i = 0;i < n ; i++)
        {
            if(i > 0 && arr[i - 1] < arr[i])  // ask form previous one can i add on not 
            {
                ans ++ ; // if add then incre in ans ;
                
            }
            else{
                ans = 1; // else make ans is equla to  1 ;
            }
            
                res = max(res , ans) ; // at the end take the max ;
            
        }
        return res ;
    }
};