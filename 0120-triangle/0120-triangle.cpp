class Solution {
public:
    // int getminsum(int i, int j,int n, vector<vector<int>>& triangle, vector<vector<int>>& dp){
    //     if(dp[i][j]!=-1)return dp[i][j];
    //    if(i == n-1) return triangle[i][j];
    //     int adj=triangle[i][j]+getminsum(i+1,j,n,triangle,dp);
    //     int adjside=triangle[i][j]+getminsum(i+1,j+1,n,triangle,dp);
    //     return dp[i][j]=min(adj,adjside);
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        // int border=triangle[n-1].size();
        vector<vector<int>>dp(n,vector<int>(n,-1));

        for(int i=0;i<n;i++)dp[n-1][i]=triangle[n-1][i];
        
        for(int i=n-2;i>=0;i--){
            for (int j=i;j>=0;j--){
            int adj = triangle[i][j] + dp[i + 1][j];
            int adjside = triangle[i][j] + dp[i + 1][j + 1];
            dp[i][j] = min(adj, adjside);
        }
        }
        return dp[0][0];
        // return getminsum(0,0,n,triangle,dp);
    }
};