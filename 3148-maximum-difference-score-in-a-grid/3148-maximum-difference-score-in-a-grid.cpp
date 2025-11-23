class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        int n=grid.size(),m=grid[0].size();
        int res=INT_MIN;
        dp[0][0]=INT_MAX;
        int min1=INT_MAX;
        for(int i=1;i<m;i++){
            dp[0][i]=min(min1,grid[0][i-1]);
            min1=dp[0][i];
            cout<<dp[0][i]<<" ";
        }
        cout<<endl;
        min1=INT_MAX;
        for(int i=1;i<n;i++){
         dp[i][0]=min(min1,grid[i-1][0]);
         min1=dp[i][0];
         cout<<dp[i][0]<<" ";
        }
        cout<<endl<<endl;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]=min(grid[i][j-1],min(grid[i-1][j],min(dp[i-1][j],dp[i][j-1])));
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res=max(res,grid[i][j]-dp[i][j]);
            }
        }

        return res;
    }
};