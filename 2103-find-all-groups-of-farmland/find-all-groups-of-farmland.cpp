class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
     int n=land.size();
     vector<vector<int>>v;
     int m=land[0].size();
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(land[i][j]==0)continue;
            int c1=j;
            while(c1<m && land[i][c1]==1){
                c1++;
            }
            int c2=i;
            while(c2<n && land[c2][j]==1){
                c2++;
            }
            c1 = c1==0 ? c1:c1-1;
            c2= c2==0?c2:c2-1;
            v.push_back({i,j,c2,c1});
            for(int k=i;k<=c2;k++){
                for(int l=j;l<=c1;l++){
                    land[k][l]=0;
                }
            }
        }
     }
     return v;   
    }

};