class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& arr, int k) {
        int n = arr.size() , m = arr[0].size() ;
        int ones = 0 ;
        vector<pair<int,int> > ans ;
        int kk = 0;
        for(int i = 0 ; i< n ; i++){
            vector<int> temp = arr[i] ;
            for(int j = 0; j < m ; j++){
                if(temp[j] == 1){
                    ones ++;
                }
            }
            ans.push_back({ones , kk ++}) ;
            ones = 0;
        }
        kk = 0;
        sort(ans.begin() , ans.end()) ;
        vector<int> res ;
        for(int i = 0 ; i < k ; i++){
            res.push_back(ans[i].second) ;
        }
        return res ;
    }
};