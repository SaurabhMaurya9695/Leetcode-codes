class Solution {
public:
    void DFS( vector<vector<char>> &grid, int r, int c, int n, int m ){
        if( r<0 || r>=n || c<0 || c>=m || grid[r][c] == '0' ) return;
        grid[r][c] = '0';
        int x[]={0,0,1,-1};
        int y[]={1,-1,0,0};
        for( int i=0; i<4; i++ )
            DFS( grid, r+x[i], c+y[i], n, m );
    }
    int numIslands(vector<vector<char>> &grid) {
        int count =0;
        int n=grid.size();
        int m=grid[0].size();
        for( int i=0; i<n; i++ ){
            for( int j=0; j<m; j++ ){
                if( grid[i][j]=='1' ){
                    count++;
                    DFS( grid, i, j, n, m );
                }
            }
        }
        return count;
    }
};