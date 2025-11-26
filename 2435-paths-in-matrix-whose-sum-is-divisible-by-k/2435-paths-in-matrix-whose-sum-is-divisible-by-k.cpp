class Solution {
public:
    int mod=1e9+7;
    int findways(int n, int m, int sum,int k, vector<vector<int>>& grid, vector<vector<vector<int>>>& dp){
        if(n<0 || m <0)return false;
        if(n==0 && m==0){
            sum+=grid[0][0];
            return (sum%k ==0)?true:false;
        }
        if(dp[n][m][sum]!=-1)return dp[n][m][sum];
        // if(dp[n][m]!=-1)return dp[n][m];
        int up= findways(n-1,m,(sum+grid[n][m])%k,k,grid,dp);
        int left=findways(n,m-1,(sum+grid[n][m])%k,k,grid,dp);
        return dp[n][m][sum] =(up+left)%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();

        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(k,-1)));
        int res= findways(n-1,m-1,0,k,grid,dp);
      
        return res;
    }
};