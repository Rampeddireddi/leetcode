class Solution {
public:
   int Zoro(int i,int n, int buy, vector<int>&prices,vector<vector<int>>&dp){
   if(i>=n)return 0;
   int res=0,sell=0;
   if(dp[i][buy]!=-1)return dp[i][buy];
   if(buy){
    res= max(-prices[i]+Zoro(i+1,n,0,prices,dp), Zoro(i+1,n,1,prices,dp));
   }
   else{
    sell= max(prices[i]+Zoro(i+2,n,1,prices,dp),Zoro(i+1,n,0,prices,dp));
   }
   return dp[i][buy] =max(res,sell);
   }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
       return Zoro(0,prices.size(),1, prices,dp); 
    }
};