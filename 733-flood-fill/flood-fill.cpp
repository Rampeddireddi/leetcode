class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        queue<pair<int,int>>q;
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int check=image[sr][sc];
        image[sr][sc]=color;
        q.push({sr,sc});
        vis[sr][sc]=2;
        int rows[4]={0,0,1,-1};
        int cols[4]={1,-1,0,0};
        while(!q.empty()){
            auto node=q.front();
            int r=node.first;
            int c=node.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+rows[i];
                int nc=c+cols[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && image[nr][nc]==check){
                    q.push({nr,nc});
                    image[nr][nc]=color;
                    vis[nr][nc]=2;
                }
            }
        }
        return image;
    }
};