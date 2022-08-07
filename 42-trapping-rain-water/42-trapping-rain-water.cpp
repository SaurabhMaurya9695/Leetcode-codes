class Solution {
public:
    
    // time -> o(n) , space -> o(n); 
//     vector<int> leftboundary(vector<int>  arr ,int n)
//     {
//         vector<int> left_b(n ,  0);
//         left_b[0] = arr[0] ; // for now I'm the biggest boundary;
//         int temp = arr[0];
//         for(int i = 1 ; i< n ; i++)
//         {
//             if(arr[i] > temp) // 0 1 0 2 1 
//                                      // 0 
//             {
//                 temp = arr[i];
//                 left_b[i] = arr[i];
//             }
//             else{
//                 left_b[i] = temp;
//             }
//         }
//         return left_b;
        
//     }
//     vector<int> rightboundary(vector<int> arr , int n)
//     {
//         vector<int> right_b(n,0);
//         right_b[n-1] = arr[n-1];
//         for(int i = n-2 ; i>=0 ; i--)
//         {
//             if(arr[i] > right_b[i+1]) // n- 2 + 1; => n - 1;
//             {
//                 right_b[i] = arr[i];
//             }
//             else{
//                 right_b[i] = right_b[i+1];
//             }
//         }
//         return right_b;
        
//     }
//     int trap(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> left = leftboundary(arr , n);
//         vector<int> right = rightboundary(arr , n);
//         int water =0 ;
//         for(int i = 0 ; i< n ; i++)
//         {
//             water += min(left[i] , right[i]) - arr[i];
//         }
//         return water ;
//     }
    
    
    
    int trap(vector<int>& arr) 
    {
        int n = arr.size();
        
        // base case;
        if(n<=2) return 0;
        int left_b = arr[0] ;
        int right_b = arr[n-1];
        int left = 1 , right = n-2;
        int ans = 0;
        while(left <= right)
        {
            if(left_b < right_b)
            {
                // we are in the left;
                if(arr[left] > left_b)   // 0 1
                {
                    // we cam't store water here;
                    left_b = arr[left];
                }
                else{
                    ans += left_b - arr[left];  // adding the water 
                }
                left++;
            }
            else{
                if(arr[right] > right_b)   // 0 1
                {
                    // we cam't store water here;
                    right_b = arr[right];
                }
                else{
                    ans += right_b - arr[right];
                }
                right--;
            }
        }
                       return ans;
    }
};