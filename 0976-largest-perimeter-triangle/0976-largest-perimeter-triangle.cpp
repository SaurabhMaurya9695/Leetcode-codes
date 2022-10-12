class Solution {
public:
    int largestPerimeter(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int sum=0;
        int n=arr.size();
        
        for(int i=n-1;i>=2;i--){
            
           if(arr[i-1] + arr[i-2] > arr[i]){
               // sum of two sides should be greater than the third one
               sum+=arr[i]+arr[i-1]+arr[i-2];
              break;
           }
        }
        return sum;
    }
};