class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) 
    {
        int n = arr.size() ;
        int i = 0 , j = 0;
        vector<int> left , right ;
        int pcnt = 0 ;
        while(i < n)
        {
            if(arr[i]  > pivot)
            {
                right.push_back(arr[i]);
            }
            else if(arr[i] < pivot)
            {
                left.push_back(arr[i]) ;      
            }
            else {
                // equal condition ;
                pcnt++;
            }
            i++;
        }
        
        while(pcnt -- )
        {
            left.push_back(pivot);
        }
        for(int i = 0 ; i< right.size() ; i++)
        {
            left.push_back(right[i]);
        }
        return left;
    }
};