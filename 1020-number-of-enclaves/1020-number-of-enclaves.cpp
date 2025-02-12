class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
     queue<pair<int,int>>q;
     int n=grid.size(),m=grid[0].size();
     vector<vector<int>>vis(n,vector<int>(m,0)); 
     //boundaries traversing
     for(int i=0;i<n;i++){
        if(grid[i][0]==1){
            vis[i][0]=1;
            q.push({i,0});
        }
        if(grid[i][n-1]==1){
            vis[i][n-1]=1;
            q.push({i,n-1});
        }
     }
     for(int i=0;i<m;i++){
        if(grid[0][i]==1){
            q.push({0,i});
            vis[0][i]=1;
         }
        if(grid[m-1][i]==1){
            q.push({m-1,i});
            vis[m-1][i]=1;
        }
    }
    int rows[]={1,-1,0,0};
    int cols[]={0,0,-1,1};
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        int r=node.first;
        int c=node.second;
        for(int i=0;i<4;i++){
            int nr=r+rows[i];
            int nc=c+cols[i];
        if(nr<n && nr >=0 && nc<m && nc>=0 &&
         vis[nr][nc]==0 && grid[nr][nc]==1){
            q.push({nr,nc});
            vis[nr][nc]=1;
        }
        }
    }
     int res=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && grid[i][j]==1)res++;
        }
     }
     return res;
    }
};