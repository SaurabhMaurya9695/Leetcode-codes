class Solution {
public:
    int maxOperations(vector<int>& arr, int k) 
    {
     
        sort(arr.begin(), arr.end()) ;
        int start = 0, end = arr.size() - 1;
        int cnt = 0;
        while(start < end)
        {
            if(arr[start] + arr[end] == k)
            {
                cnt++;
                start++;
                    end--;
            }
            else if(arr[start] + arr[end] > k)
            {
                end-- ;
            }
            else{
                start ++ ;
            }
        }
        return (cnt ) ;
    }
};