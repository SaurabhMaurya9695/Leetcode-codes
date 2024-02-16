class Solution {
public:

    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp ;
        for(auto x : arr) mp[x] ++;
        
        vector<int> vp ;
        for(auto &[l ,r] : mp){
            vp.push_back(r) ;
        }
        
        sort(vp.begin() , vp.end()) ;
        
        int count = 0;
        for (int& f : vp) {
            if (k >= f) {
                k -= f;
                count++;
            } else {
                break;
            }
        }
        
        return vp.size() - count;
    }
};