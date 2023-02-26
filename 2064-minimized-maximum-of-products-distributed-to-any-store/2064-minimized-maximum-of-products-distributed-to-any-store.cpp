class Solution {
public:
    int ceil(int x , int y){
        if(x % y == 0){
            return (x / y);
        }
        else{
            return (x / y) + 1;
        }
    }
    bool isPossibleToDistribute(vector<int> arr , int shops , int mid){
        int filled = 0;
        for(int i = 0 ; i < arr.size() ; i ++){
            filled += ceil(arr[i] , mid) ;
        }
        if(filled > shops) return false;
        else return true ;
    }
    
    int minimizedMaximum(int shops, vector<int>& arr) {
        int start = 1 ;
        int end = 100000 ;
        int ans = shops ;
        while(start <= end){
            int mid = start + (end - start) /2;
            if(isPossibleToDistribute(arr , shops , mid) == true){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
    }
};