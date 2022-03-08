class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& A) {
        int dx=A[1][0]-A[0][0];
        int dy=A[1][1]-A[0][1];
        for(int i=2;i<size(A);i++)
        {
            int dx1=A[i][0]-A[i-1][0],dy1=A[i][1]-A[i-1][1];
            if(dx1*dy!=dx*dy1) return 0;
        }
        return 1;
    
        
        
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
