class Solution {
public:
    int findMin(vector<int>& v) {
        
        int min = v[0]; // we are taken min as 0 index ;
        // check with mid if mid is > v[0] then end= mid- 1 else start = mid + 1; we know our ans is found on left side
        
        int low = 0;
        int high = v.size() - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(v[mid] < min)
            {
                min = v[mid];
                high = mid - 1;
            }
            else
                low = mid + 1;    
        }
        return min;
    }
};