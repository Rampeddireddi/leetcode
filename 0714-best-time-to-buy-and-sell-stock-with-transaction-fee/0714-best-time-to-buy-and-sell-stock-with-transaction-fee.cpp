class Solution {
public:
    int Sanji(int i,int buy, int n, vector<int>& prices, int fee, vector<vector<int>>&dp){  
        if(i>=n)return 0;
        int pur=0,sell=0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy){
            pur=max(-prices[i]+Sanji(i+1,0,n,prices,fee,dp),Sanji(i+1,1,n,prices,fee,dp));
        }
        else{
            sell=max( prices[i]-fee+Sanji(i+1,1,n,prices,fee,dp),Sanji(i+1,0,n,prices,fee,dp) );
        }
        return dp[i][buy]=max(sell,pur);
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
       return Sanji(0,1,prices.size(),prices,fee,dp); 
    }
};