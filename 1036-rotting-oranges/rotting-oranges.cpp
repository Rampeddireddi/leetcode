class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int cntone=0;
        int n=grid.size();
        int m=grid[0].size();
        int cntzero=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)
                {
                    vis[i][j]=2;
                    q.push({i,j});
                }
                else vis[i][j]=0;
                if(grid[i][j]==1)cntone++;
                else cntzero++;
            }
            }
            if(n*m == cntzero)return 0;
            int time=0;
            int row[4]={0,0,1,-1};
            int col[4]={1,-1,0,0};
        while(!q.empty()){
            int s=q.size();
            for(int k=0;k<s;k++){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
               int nr=r+row[i];
               int nc=c+col[i];
               if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]!=2 && grid[nr][nc]!=0){
                q.push({nr,nc});
                vis[nr][nc]=2;
                cntone--;
               } 
            }
            }
            time++;
        }
        return cntone==0?time-1:-1;

    }
};