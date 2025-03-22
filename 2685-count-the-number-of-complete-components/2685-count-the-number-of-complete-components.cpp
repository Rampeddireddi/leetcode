class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
       vector<vector<int>>vec(n);
       int s=edges.size();
       for(int i=0;i<s;i++){
        vec[edges[i][0]].push_back(edges[i][1]);
         vec[edges[i][1]].push_back(edges[i][0]);
       } 
      vector<bool>vis(n,false);
       int res=0;
       queue<int>q;
       for(int i=0;i<n;i++){
        if(!vis[i])
        {
            vector<int>buff;
            q.push(i);
            vis[i]=true;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                buff.push_back(node);
                for(auto k: vec[node]){
                    if(!vis[k]){
                        q.push(k);
                        vis[k]=true;
                    }
                }
            }
            bool cmp=true;
            for(auto j:buff){
                if(vec[j].size()!=buff.size()-1){
                    cmp=false;
                    break;
                }
            }
            if(cmp)res++;
        }
       }
return res;
    }
};