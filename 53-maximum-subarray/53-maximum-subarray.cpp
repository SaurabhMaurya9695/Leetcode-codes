class Solution {
public:
    int maxSubArray(vector<int>& arr)
    {
        int currSum = 0, maxSum = INT_MIN;
        
        for(int i=0; i<arr.size() ; i++){
            
            if(arr[i] + currSum >= arr[i])
                currSum += arr[i];
            else
                currSum = arr[i];
            
            maxSum = max(maxSum, currSum);
        }
        
        return maxSum;
    }
};