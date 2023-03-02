class Solution {
public:
    
    bool isPossibleToPlace(vector<int>& arr , int mid , int Balls)
    {
        int placed = 1 , placedAt = arr[0] ;
        for(int i = 1 ; i< arr.size() ; i ++)
        {
            if(placedAt + mid <= arr[i])
            {
                placed ++ ;
                placedAt = arr[i];
            }
        }
        if(placed < Balls) return false;
        else{
            return true ;
        }
    }
    
    int maxDistance(vector<int>& arr, int m) {
        
        sort(arr.begin() , arr.end()) ;
        int n = arr.size() ;
        int start = 1;
        int end = arr[n-1] - arr[0] ; // max force we can get 
        int ans = -1;
        while(start <= end)
        {
            int mid = start + (end - start) /2;
            if(isPossibleToPlace(arr , mid , m) == true)
            {
                ans = mid;
                start = mid  + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans ;
        
    }
};