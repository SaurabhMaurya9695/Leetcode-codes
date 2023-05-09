class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& arr) {
        int n = arr.size() ;
        sort(arr.begin() , arr.end() , [&](vector<int> &a, vector<int> &b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    });
        
        // we know , our height is already sorted ;
        // then use LIS on width only and you'll get the ans ;
        vector<int>LIS;
        for(int i =0;i< n;i++)
        {
            if(LIS.empty() || LIS.back() < arr[i][1]) // if we are adding at the end 
                LIS.push_back(arr[i][1]); // then add that 
            else
            {
                int index = lower_bound(LIS.begin(),LIS.end(),arr[i][1])
                        -   LIS.begin();
                LIS[index] = arr[i][1]; // or add that value at that perfect idx 
            }
        }
        
        return LIS.size();
    }
};