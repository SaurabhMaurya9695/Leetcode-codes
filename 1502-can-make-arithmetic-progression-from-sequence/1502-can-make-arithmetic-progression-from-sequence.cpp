class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        // cout<<arr[0];
        int dif=arr[1]-arr[0];
        // cout<<dif<<endl;
        for(int i=2;i<arr.size();i++)
        {
            // cout<<arr[i]-arr[i-1]<<endl;
            if(arr[i]-arr[i-1]!=dif)
                return false;
        }
        return true;
    }
};