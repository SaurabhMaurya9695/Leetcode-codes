class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
    int idx=1;
    int up=0,down=n-1, l=0,rht=n-1;
    int d=0,i;
    while(up<=down && l <=rht && idx<=(n*n))
    {
        if(d==0)
        {
            for(i=l;i<=rht;i++){
               v[up][i]=idx;
                idx++;
            }
            up++;
        }
       else if(d==1)
        {
            for(i=up;i<=down;i++){
                v[i][rht]=idx;
                idx++;
            }
           rht--;
        }
        else if(d==2)
        {
            for(i=rht;i>=l;i--){
                v[down][i]=idx;
                idx++;
            }
            down--;
        }
        else if(d==3)
        {
            for(i=down;i>=up;i--){
            v[i][l]=idx;
             idx++;
        }
            l++;
        }
        d=(d+1)%4;
        
    }

    return v;
}
};