class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) 
    {
        int n = arr.size();
        int m = arr[0].size();
        int sum = 0 ;
        vector<int> maxi ;
        for(int i = 0; i< n; i++)
        {
            vector<int> ans =arr[i];
            for(int x :ans)
            {
                sum += x;
            }
            maxi.push_back(sum) ;
            sum = 0;
            
        }
        return *max_element(maxi.begin() , maxi.end());
        
    }
};