class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,pair<int,int>>>maxh;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            maxh.push({double(arr[i])/arr[j],{arr[i],arr[j]}});
            if(maxh.size()>k)
                maxh.pop();
            }
        }
        // for(auto &it:maxh){
        //     cout<<it.first<<endl;
        // }
        return {maxh.top().second.first,maxh.top().second.second};
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
