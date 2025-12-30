class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt =0;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
            map<int,int>unq;
            bool dup=false;
              for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(unq.find(grid[k][l])!=unq.end() || grid[k][l]>9 || grid[k][l]<1){
                        dup=true;
                        break;
                    }
                    unq[grid[k][l]]=1;
                }
                if(dup)break;
              }
              if(!dup){
                if(grid[i][j]+grid[i+1][j]+grid[i+2][j] ==15 ){
                    if(grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1]==15){
                        if(grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2] ==15){
                            if(grid[i][j]+grid[i][j+1]+grid[i][j+2]==15){
                                if(grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2]==15){
                                    if(grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]==15){
                                        if(grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]==15){
                                            if(grid[i+2][j]+grid[i+1][j+1]+grid[i][j+2]==15)cnt++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              }
            }
        }
        return cnt;
    }
};