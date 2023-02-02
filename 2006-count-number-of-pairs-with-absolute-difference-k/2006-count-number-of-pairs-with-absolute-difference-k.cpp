class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        int cnt = 0;
        for(int i = 0 ;i < arr.size() ; i ++)
        {
            for(int j = 0 ; j< arr.size()  ; j++)
            {
                if(i < j && abs(arr[i] - arr[j]) == k)
                {
                    cnt++;
                }
            }
        }
        return cnt ;
    }
};