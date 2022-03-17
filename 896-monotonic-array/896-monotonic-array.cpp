class Solution {
public:
    #define sort(a) sort(a.begin() , a.end())
    bool issorted(vector<int> arr)
    {
        vector<int > temp = arr;
        sort(temp);
        if(temp == arr)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool isdesorted(vector<int > arr)
    {
        vector<int> temp = arr;
        sort(temp);
        reverse(temp.begin() , temp.end());
        if(temp == arr)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool isMonotonic(vector<int>& nums) {
        return (issorted(nums) || isdesorted(nums)) ;
    }
};