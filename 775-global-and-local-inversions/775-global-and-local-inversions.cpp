class Solution {
public:
    bool isIdealPermutation(vector<int>& arr) {
        int n = arr.size() ;
        for(int i = 0 ; i<n ; i++)
        {
            if(abs(i - arr[i] ) > 1)
            {
                return false;
            }
        }
        return true;
    }
};