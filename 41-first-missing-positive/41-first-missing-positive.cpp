class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        // marks the element which are out of range
        bool one = false;
        int n = arr.size();
        for(int i =0 ;i < n; i++)
        {
            if(arr[i] == 1)  one = true;
            if(arr[i] < 1  || arr[i] > n)
            {
                arr[i] = 1;
            }
            
        }
        if(one  == false) return 1 ; // one is the least smallest no which are present;
        // if one is not found to be false then our ans be somewhere in range .
        // map in index
        for(int i =0; i< n; i++)
        {
          int index = abs(arr[i]);
          arr[index -1] = - abs(arr[index - 1] );
        }
        // find the missing no 
        for(int i= 0; i< n; i++)
        {
            if(arr[i] > 0) return i + 1 ;
        }
        return n +1 ;
    }
};