class Solution {
public:
    
   bool isSafe(vector< string>chess,int col,int row){
        for(int i=0;i<row;i++){
            if(chess[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
            if(chess[i][j]=='Q'){
                return false;
            }
        }
         for(int i=row-1,j=col+1;i>=0&&j<chess[0].size();i--,j++){
            if(chess[i][j]=='Q'){
                return false;
            }
        }
        return true;
}
    
int  printNQueens(vector<string>chess,vector<vector<string>>&s , int row) 
{
    if(chess.size()==0) return 0;
    if(row==chess.size())
    {
        s.push_back(chess);
        return 1;
    }
    int cnt = 0;
  for(int i=0;i<chess[0].size();i++){
      if(isSafe(chess,i,row)){
          chess[row][i]='Q';
          cnt += printNQueens(chess,s ,row+1);
          chess[row][i]='.';
      }
  }
    return cnt;
}
    int totalNQueens(int n) {
        string st="";
        vector<vector<string>>v ;
        for(int i=0;i<n;i++){
            st+='.';
        }
        vector<string>s(n,st);
    
        int x = printNQueens(s,v ,0);
        return x ;
    }
};