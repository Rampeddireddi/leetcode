class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
       int m=connections.size();
       if(m<n-1)return -1;
       int conn=0;
        vector<int>adj[n];
        for(auto i:connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                conn++;
                q.push(i);
                vis[i]=1;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    // vis[node]=1;
                    for(auto k:adj[node]){

                        if(!vis[k]){
                            vis[k]=1;
                            q.push(k);
                            }
                    }
                }
            }
        }
        return conn-1;
    }
};