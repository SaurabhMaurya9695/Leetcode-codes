class Solution {
public:
    
    vector<int> leftboundary(vector<int>  arr ,int n)
    {
        vector<int> left_b(n ,  0);
        left_b[0] = arr[0] ; // for now I'm the biggest boundary;
        for(int i = 1 ; i< n ; i++)
        {
            if(arr[i] > left_b[i-1]) // 0 1 0 2 1 
                                     // 0 
            {
                left_b[i] = arr[i];
            }
            else{
                left_b[i] = left_b[i-1];
            }
        }
        return left_b;
        
    }
    vector<int> rightboundary(vector<int> arr , int n)
    {
        vector<int> right_b(n,0);
        right_b[n-1] = arr[n-1];
        for(int i = n-2 ; i>=0 ; i--)
        {
            if(arr[i] > right_b[i+1]) // n- 2 + 1; => n - 1;
            {
                right_b[i] = arr[i];
            }
            else{
                right_b[i] = right_b[i+1];
            }
        }
        return right_b;
        
    }
    int trap(vector<int>& arr) {
        int n = arr.size();
        vector<int> left = leftboundary(arr , n);
        vector<int> right = rightboundary(arr , n);
        int water =0 ;
        for(int i = 0 ; i< n ; i++)
        {
            water += min(left[i] , right[i]) - arr[i];
        }
        return water ;
    }
};