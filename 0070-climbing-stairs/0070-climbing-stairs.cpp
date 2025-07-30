class Solution {
public:
    int alexander(int n,vector<int>&dp){
        if(n==1)return 1;
        if(n==2)return 2;
        if(dp[n]!=-1)return dp[n];

        dp[n]=alexander(n-2,dp)+alexander(n-1,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return alexander(n,dp);
    }
};