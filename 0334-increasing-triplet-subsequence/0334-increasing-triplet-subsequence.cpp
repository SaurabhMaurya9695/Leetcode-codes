class Solution {
public:
    bool increasingTriplet(vector<int>& arr) 
    {
        int n = arr.size() ;
        int mini = INT_MAX; 
        int maxsf = INT_MAX;
        bool ok = false;
        for(int i = 0 ; i< n ; i++)
        {
            if(arr[i] < mini)
            {
                mini = arr[i];
            }
            else if(arr[i] > mini && arr[i] < maxsf)
            {
                maxsf = arr[i];
            }
            else if(arr[i] > maxsf)
            {
                ok = true;
                break;
            }
        }
        return ok;
    }
};