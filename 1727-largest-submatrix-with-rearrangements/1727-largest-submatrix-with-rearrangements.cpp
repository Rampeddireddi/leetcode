class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
     int n=matrix.size();
     int m=matrix[0].size();
     vector<vector<int>>heights(n,vector<int>(m,0));
     for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0){
                    heights[0][j]=matrix[i][j];
                }
                else{
                    if(matrix[i][j]==0)heights[i][j]=0;
                    else heights[i][j]=1+heights[i-1][j];
                }
            }
     }
     int res=INT_MIN;
     for(int i=0;i<n;i++){
        sort(heights[i].begin(),heights[i].end(),[](const auto a,const auto b){
            return a>b;
        });
        int minh=heights[i][0];
        
        for(int j=0;j<m;j++){
            minh=min(minh,heights[i][j]);
            cout<<minh<<" "<<j<<" ";
            res=max(res,minh*(j+1));
            // cout<<res<<" ";
        }
        cout<<endl;
     }
     return res;   
    }
};