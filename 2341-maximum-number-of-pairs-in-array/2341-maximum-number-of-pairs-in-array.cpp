class Solution {
public:
    vector<int> numberOfPairs(vector<int>& arr) {
        unordered_map<int,int > mp ;
        for(auto x : arr) mp[x]++;
        int pair = 0 , left = 0 ;
        for(auto x:  mp)
        {
            pair += x.second / 2;
            left += x.second % 2;
        }
        return {pair , left} ;
    }
};