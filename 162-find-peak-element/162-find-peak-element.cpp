class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size() ;
        if(n == 1) return 0;

        int start = 0 ;
        int end = n - 1;
        int res = -1 ;
        while(start <= end)
        {
            int mid = start + (end - start) / 2 ;
            if(mid > 0 &&  mid < n - 1)
            {
                if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                {
                    res = mid;
                    break;
                }
                else if(arr[mid + 1] > arr[mid])
                {
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
             // mid == 0 ;
            if( mid == 0)
            {
                if(arr[0] > arr[1])
                {
                    res = 0;
                    break; 
                }
                else{
                    res = 1 ;
                    break;
                }
            }
            if(mid ==  n- 1)
            {
                if(arr[n-1] > arr[n - 2])
                {
                    res =  n-1;
                    break;
                }
                else{
                    res =  n-2;
                    break;
                }
            }
            
        }
        return res ;
    }
};