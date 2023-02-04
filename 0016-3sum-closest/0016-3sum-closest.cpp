class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        int diff = INT_MAX;
        int sum ;
        int n = arr.size() ;
        for(int i = 0 ; i< n ;i ++)
        {
            int start = i + 1;
            int end = n - 1;
            while(start < end)
            {
               if(abs(arr[i] + arr[start] + arr[end] - target) < diff)
               {
                   diff = abs(arr[i] + arr[start] + arr[end] - target);
                   sum = arr[i] + arr[start] + arr[end] ;
               }
                if(arr[i] + arr[start] + arr[end] == target) 
                {
                    return target;
                }
                else if(arr[i] + arr[start] + arr[end] < target) {
                    start ++;
                }
                else {
                    end -- ;
                }
            }
        }
        return sum ;
    }
};