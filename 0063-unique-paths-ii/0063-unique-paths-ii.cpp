class Solution {
public:
 int findpath(int m,int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
    if(m<0 || n<0)return 0;
    if(obstacleGrid[m][n]==1)return 0;
    if(m==0 && n==0)return 1;
    if(dp[m][n]!=-1)return dp[m][n];
    int up=findpath(m-1,n,obstacleGrid,dp);
    int bottom=findpath(m,n-1,obstacleGrid,dp);
     dp[m][n]=up+bottom;
     return dp[m][n];
 }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int m=obstacleGrid.size();
       int n=obstacleGrid[0].size();
       vector<vector<int>>dp(m,vector<int>(n,-1));
        return findpath(m-1,n-1,obstacleGrid,dp);
    }
};