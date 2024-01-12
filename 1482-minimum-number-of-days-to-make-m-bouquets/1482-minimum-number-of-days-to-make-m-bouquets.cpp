class Solution {
public:
    
    bool check( vector<int> & arr ,int possibleAns , int adjecentChoose , int buckets ,int n)
    {
        int currentBuckets = 0;
        int bloomedflower = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] <= possibleAns)
            {
                bloomedflower++;
                if(bloomedflower == adjecentChoose){
                    currentBuckets++;
                    bloomedflower=0;   
                }
            }else{
                bloomedflower=0;
            }
        }
        return currentBuckets >= buckets;
    }
    
    int minDays(vector<int>& arr, int m, int k) {
        long long  n = arr.size();
        if( m > n / k) {
            return -1;
        }
        int l = 1 ;
        int r = *max_element(arr.begin(),arr.end());
        int ans = -1;
        while( l <= r)
        {
            int mid = (l + ( r - l ) / 2) ;
            if(check( arr , mid , k , m , n ) == true)
            {
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};