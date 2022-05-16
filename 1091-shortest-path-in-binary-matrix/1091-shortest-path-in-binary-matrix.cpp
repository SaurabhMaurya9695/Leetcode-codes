class Solution {
public:
   int dis[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};

int shortestPathBinaryMatrix(vector<vector<int>>& g) {

    //Lambda check function for valid cell
    auto valid=[&](int i,int j,int n){
      return  i<0 or j<0 or i>=n or j>=n? false : true;
    };
    
    queue<pair<int,int>> q;
    int n= size(g),dist=1;
    vector<vector<bool>> ans(n,vector<bool>(n,false));
    
    //  Rule of Bfs traversal -> Push first level elements in queue to start traversal
    if(g[0][0]==0) q.push({0,0}) , ans[0][0]=true;
    
    //bfs traversal
    for(;size(q);dist++){
        int m= size(q);
        
        //for level wise traversal
        while(m--){
            auto p= q.front(); q.pop();
			
            //reached a destination cell return distance
            if(p.first==n-1 and p.second==n-1) return dist;
            
            //else put the neighbours
            for(int i=0;i<8;i++){
                int x= dis[i][0]+p.first;
                int y= dis[i][1]+p.second;
                
                //check if a valid cell or not
                if(valid(x,y,n) and !ans[x][y] and !g[x][y])  q.push({x,y}), ans[x][y]=true;
            }   
        }
    }
    return -1;
}
};