class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) 
    {
        vector<pair<int ,int >> v ;
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            v.push_back({arr[i] , i}) ;
        }
        
        sort(v.begin() , v.end()) ;
        
        int start = 0 , end = v.size() - 1;
        while(start <= end)
        {
            if(v[start].first + v[end].first == target)
            {
                return {v[start].second , v[end].second};
            }
            else if(v[start].first + v[end].first > target)
            {
                end --;
            }
            else {start++;}
        }
        
        return {};
        
    }
};