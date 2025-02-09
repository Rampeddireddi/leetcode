class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                vis[i][0]=1;
            }
            if(board[i][m-1]=='O'){
                q.push({i,m-1});
                vis[i][m-1]=1;
            }
        }
        for(int i=0;i<m;i++){
             if(board[0][i]=='O'){
                q.push({0,i});
                vis[0][i]=1;
            }
            if(board[n-1][i]=='O'){
                q.push({n-1,i});
                vis[n-1][i]=1;
            }
        }
        int rows[]={1,-1,0,0};
        int cols[]={0,0,-1,1};
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            int row=node.first;
            int col=node.second;
            for(int i=0;i<4;i++){
                int nr=row+rows[i];
                int nc=col+cols[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && board[nr][nc]=='O'){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==1)board[i][j]='O';
                else board[i][j]='X';
            }
        }
        return;
    }
};