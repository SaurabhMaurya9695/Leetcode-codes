class Solution {
public:
    double average(vector<int>& arr) 
    {
       vector<int> v;
        v = arr;
        sort(v.begin(),v.end());
        double sum = 0;
        double n = arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        sum = sum - (v[0]+v[n-1]);
        n-=2;
        return sum/n;
    }
};