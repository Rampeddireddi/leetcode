class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
     vector<int>res;
     map<int,int>colormap,ballmap;
     int n=queries.size();
     for(int i=0;i<n;i++){
        int ball=queries[i][0],color=queries[i][1];
        if(ballmap.find(ball)!=ballmap.end()){
            int prevcolor=ballmap[ball];
            colormap[prevcolor]--;
            if(colormap[prevcolor]==0)colormap.erase(prevcolor);
        }
        ballmap[ball]=color;
        colormap[color]++;
        res.push_back(colormap.size());

     }
     return res;
    }
};