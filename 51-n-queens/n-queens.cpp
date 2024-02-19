class Solution {
public:
vector<vector<string>>res;
void Ram(int n,int col,vector<string>v,vector<int>&leftrow,vector<int>&lowdiag,vector<int>&updiag){
    if(col>=n){
        res.push_back(v);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0 && lowdiag[row+col]==0 && updiag[n-1+col-row]==0){
            v[row][col]='Q';
            leftrow[row]=1;
            lowdiag[row+col]=1;
            updiag[n-1+col-row]=1;
            Ram(n,col+1,v,leftrow,lowdiag,updiag);
            v[row][col]='.';
            leftrow[row]=0;
            lowdiag[row+col]=0;
            updiag[n-1+col-row]=0;
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
      vector<string>v(n);
      string s(n,'.');
      for(int i=0;i<n;i++){
           v[i]=s;
      }
      vector<int>leftrow(n,0);
      vector<int>lowdiag(2*n-1,0);
      vector<int>updiag(2*n-1,0);
      Ram(n,0,v,leftrow,lowdiag,updiag);
      return res;
    }
};