class Solution {
public:
    int minimumCoins(int n,  vector<int>& coins, int amount, vector<vector<int>>&dp){
        if(n==0){
            if(amount%coins[0]==0)return amount/coins[0];
            return 1e8;
        }
        if(dp[n][amount]!=-1)return dp[n][amount];
        int vaddu=minimumCoins(n-1,coins,amount,dp);
        int take=1e8;
        if(coins[n]<=amount){
            take=1+minimumCoins(n,coins,amount-coins[n],dp);
        }
        return dp[n][amount] =min(take,vaddu);
    }
    int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
    int val= minimumCoins(n-1,coins,amount,dp);
    return (val==1e8)?-1:val;    
    }
};