class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& arr)
    {
        int n = arr.size() ;
        if(n < 3) return 0;
        int diff = arr[1] - arr[0] ;
        int cnt = 0;
        int idx = 0; // to storing the subarray;
        // starting from a index 1 ;
        for(int i = 1 ; i< n -1 ; i++)
        {
            int d = arr[i+1] - arr[i];
            if(d == diff)
            {
                idx++; // we get the subarray 
            }
            else{
                diff = d;
                idx = 0;
            }
            cnt += idx ;
        }
        return cnt ;
        
    }
};