class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int k) {
        int rows = arr.size();
        int col = arr[0].size();
        int i =0 ; int  j = col - 1;
        while(i < rows && j >=0)
        {
            if(arr[i][j] == k)
                return true;
            else if( arr[i][j] > k)
                j--;
            else{
                i++;
            }
        }
        return false; 
        
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
