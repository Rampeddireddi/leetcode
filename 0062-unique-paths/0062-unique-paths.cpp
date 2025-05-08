class Solution {
public:
  int printpath(int m,int n,vector<vector<int>>&dp){
    if(m==0 && n==0)return 1;
    if(m<0 || n<0)return 0;
    if(dp[m][n]!=-1)return dp[m][n];
    int up=printpath(m-1,n,dp);
    int left=printpath(m,n-1,dp);
    dp[m][n]= up+left;
    return dp[m][n];
  }
    int uniquePaths(int m, int n) {
        int cnt=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return printpath(m-1,n-1,dp);
    }
};