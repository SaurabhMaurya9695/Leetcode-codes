class Solution {
public:
    
        bool is_possible(vector<int> arr, int left, int right)
    {
        if(left == right)
            return false;
        
        vector<int> temp;
        
        for(int i = left; i <= right; i++)
        {
            temp.push_back(arr[i]);
        }
        
        sort(temp.begin(), temp.end());
        
        int diff = temp[1] - temp[0];
        
        for(int i = 2; i < temp.size(); i++)
        {
            if(temp[i] - temp[i - 1] != diff)
                return false;
        }
        
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& arr, vector<int>& l, vector<int>& r) {
        
        int n = arr.size();
        
        int m = l.size();
        
        vector<bool> res;
        
        for(int i = 0; i < m; i++)
        {
            if(is_possible(arr, l[i], r[i]))
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        
        return res;
    }
};