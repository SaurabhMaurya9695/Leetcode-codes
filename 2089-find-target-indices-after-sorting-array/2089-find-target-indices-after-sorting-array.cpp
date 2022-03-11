class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int s) 
    {
        sort(v.begin() , v.end());
        int n = v.size() ;
        vector<int>ans ;
        for(int i = 0 ; i< n; i++)
        {
            if(v[i] == s)
            {
                int idx = i ;
                ans.push_back(idx);
            }
        }
        // for(int i =  n; i>=0 ; i--)
        // {
        //     if(v[i] == s)
        //     {
        //         int idx = i ;
        //         ans.push_back(idx);
        //     }
        // }
        return ans ;
    }
};