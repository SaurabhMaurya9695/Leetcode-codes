class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size() ;
        if(n<=2) return 0;
         
        // computing the right max;
        vector<int> leftmax(n , 0) ;
        leftmax[0] = arr[0] ;
        for(int i = 1 ; i< n ;i++)
        {
            if(leftmax[i-1] > arr[i])
            {
                leftmax[i] = leftmax[i-1];
            }
            else{
                leftmax[i] = arr[i];
            }
        }
        
        // computing rightmax;
        vector<int> rightmax(n , 0);
        rightmax[n-1] = arr[n-1];
        for(int i = n -2 ; i>=0 ; i--)
        {
            if(rightmax[i+1] > arr[i])
            {
                rightmax[i] = rightmax[i + 1]; 
            }
            else{
                rightmax[i] = arr[i];
            }
        }
        for(int x : leftmax)
        {
            cout<< x << " ";
        }
        cout<< endl;
        
        int water = 0 ;
        // to get the trapping water we should subtract our height from the min(left, right);
        for(int i = 0; i< n; i++)
        {
            water +=  min(leftmax[i] , rightmax[i])  - arr[i] ;
        }
        
        return water;
        
    }
};