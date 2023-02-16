class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int start = 0 , end = arr.size() - 1;
        int mid ;
        while(start <= end){
            mid = (start + end) / 2;
            if(arr[mid] == x){
                break;
            }
            else if(arr[mid] > x) 
            {
                end = mid - 1;
            }
            else if(arr[mid] < x){ // we have to go in right direction 
                start = mid  + 1;
            }
        }
        cout<< arr[mid ] << endl;
        int left , right ;
        if(mid - 1 < 0){
        // we get our mid now ;
             left = mid  , right = mid + 1;
        }
        else{
            left = mid - 1 , right = mid;
        }
        vector<int> ans ;
        while( k > 0 && left >= 0 && right < arr.size() )
        {
            if(abs(arr[left] - x) <= abs(arr[right] - x)){
                ans.push_back(arr[left]) ;
                left -- ;
            }
            else {
                ans.push_back(arr[right]) ;
                right ++ ;
            }
            k -- ;
        }
        
        //left < 0 but we have some k left
        while(right < arr.size() && k > 0){
            ans.push_back(arr[right]);
            right ++ ;
            k--;
        }
        while(left >= 0 && k > 0){
            ans.push_back(arr[left]);
            left --  ;
            k--;
        }
        
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
};






