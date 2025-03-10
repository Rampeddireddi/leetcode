class Solution {
public:
   bool dfs(int col,vector<int>&color,vector<vector<int>>graph,int node){
    // vis[node]=1;
    col=!col;
    color[node]=col;
    for(auto i:graph[node]){
        if(color[i]==-1){
            if(dfs(col,color,graph,i)==false)return false;
        }
        else if(color[i]==col)return false;
    }
    return true;

   }
    bool isBipartite(vector<vector<int>>& graph) {
     int n=graph.size();
     int col=0;
    //  vector<bool>vis(n,0);
     vector<int>color(n,-1);
    for(int i=0;i<n;i++){
        if(color[i]==-1){
            if(dfs(col,color,graph,i)==false)return false;
        }
    }
    return true;
    }
};