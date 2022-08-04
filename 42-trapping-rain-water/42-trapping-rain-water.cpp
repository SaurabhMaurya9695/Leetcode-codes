class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size() ;
        if(n<=2) return 0;
         
        // using two pointer;
        int left_b = arr[0] ;
        int right_b = arr[n-1];
        
        int left = 1 , right = n-2;
        int ans = 0;
        while(left <= right)
        {
            if(left_b < right_b) // we are taking the smaller one;
            {
                if(arr[left] >= left_b)
                {
                    left_b = arr[left]; 
                }
                else{
                    ans += (left_b - arr[left]);
                }
                left++;
            }
            else{
                    if(arr[right] >= right_b)
                    {
                        right_b = arr[right];
                    }
                    else{
                        ans += (right_b - arr[right]);
                    }
                    right--;
            }
            
            
        }
        
        return ans;
        
        
        
        
    }
};