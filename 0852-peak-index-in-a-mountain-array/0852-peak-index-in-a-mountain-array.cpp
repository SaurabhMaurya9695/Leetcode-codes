class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int start = 0 ;
        int end = arr.size() - 1;
        int n = arr.size() ;
        
        // base case ;
        if(n < 3 ) return -1;
        while(start <= end){
            int mid = start + (end - start) /  2;
            // m == 0 then mid - 1 does't exist same for m == n then m + 1 not exist 
            if(mid > 0 &&  mid + 1 < n){
                if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
                    return mid ;
                }
                else if(arr[mid] > arr[mid + 1]){  // 1 2 4 9 6
                    end = mid - 1 ;
                }
                else if(arr[mid] > arr[mid - 1]){
                    start = mid + 1;
                }
            }
            
            if(mid == 0){
                //first ele is peak element
                return (arr[0] > arr[1]) ? 0 : 1;
            }
            else if(mid == n - 1){
                //last elem is peak  elem
                return (arr[n-1] > arr[n-2]) ? n - 1 : n - 2 ;
            }
             
        }
        return -1;
    }
};