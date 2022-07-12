class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        int n=arr.size();
        int l=0,r=n-k;
        while(l<r){
            int mid=l+(r-l)/2;
            if(x-arr[mid]>arr[mid+k]-x)
                l=mid+1;
            else r=mid;
        }
        for(int i=l;i<l+k;i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};