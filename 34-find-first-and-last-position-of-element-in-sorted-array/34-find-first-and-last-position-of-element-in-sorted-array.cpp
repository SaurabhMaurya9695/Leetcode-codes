class Solution {
public:
    int first_occ(vector<int>& arr, int n , int x)
	{
	    int low = 0 ;
	     int high = n -1 ;
	     int ans = -1;
	     while(low <= high)
	     {
	         int mid = low + (high - low)/2;
	         if(arr[mid] == x)
	         {
	             ans = mid;
	             high = mid - 1;
	         }
	         else if(arr[mid] > x)
	         {
	             high = mid - 1;
	         }
	         else if(arr[mid] < x)
	         {
	             low = mid + 1;
	         }
	     }
	     return ans;
	}
    
    int last_occ(vector<int>& arr , int n , int x)
	{
	     int low = 0 ;
	     int high = n -1 ;
	     int ans = -1;
	     while(low <= high)
	     {
	         int mid = low + (high - low)/2;
	         if(arr[mid] == x)
	         {
	             ans = mid;
	             low = mid + 1;
	         }
	         else if(arr[mid] > x)
	         {
	            high = mid - 1;
	         }
	         else if(arr[mid] < x)
	         {
	             low = mid + 1;
	         }
	     }
	     return ans;
	}
    vector<int> searchRange(vector<int>& arr, int k) {
        // vector<int> ans;
        // if(binary_search(arr.begin() , arr.end() , k))
        // {
        //     ans.push_back(lower_bound(arr.begin(), arr.end() , k) - arr.begin());
        //     ans.push_back(upper_bound(arr.begin() , arr.end() ,k) - arr.begin() - 1);
        //     return ans;
        // }
        // else{
        //     return {-1,-1};
        // }
        int n = arr.size() ;
        
        int x = first_occ(arr , n , k);
        int y = last_occ(arr , n , k);
        return {x ,y};
        
        
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
