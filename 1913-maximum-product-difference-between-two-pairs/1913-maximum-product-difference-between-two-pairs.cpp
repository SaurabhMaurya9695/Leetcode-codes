class Solution {
public:
    int maxProductDifference(vector<int>& arr) 
    {
        int n = arr.size() ;
        sort(arr.begin(), arr.end());
        int w = arr[0] ,  x = arr[1] , y = arr[n-1] , z= arr[n-2];
        return(abs((w * x ) - (y * z)));
        
    }
    


};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();