class Solution {
public:
    vector<int> runningSum(vector<int>& arr) 
    {
        // int n = arr.size();
        // vector<int> pre(n);
        // pre[0] = arr[0] ;
        // for(int i = 1; i< n ; i++)
        // {
        //     pre[i] = arr[i] + pre[i-1] ;
        // }
        // return pre ;
        
        for(int i=1; i < arr.size();i++)
        {
            arr[i] += arr[i-1];           
        }
        return arr;
        
    }
};