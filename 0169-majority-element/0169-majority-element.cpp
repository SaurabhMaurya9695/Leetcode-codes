class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size() ;
        map<int,int> mp;
        int x ;
        for(int i =0; i< n; i++)
        {
            mp[arr[i]]++;
        }
        for(auto it :mp)
        {
            if(it.second > floor(n / 2) )
            {
                x = it.first;
            }
        }
        return x; 
    }
};