class Solution {
public:
    int commonsubseq(int n,int m,string s1, string s2, vector<vector<int>>&dp){
       if (n < 0) {
        int cost = 0;
        while(m>=0)cost+=s2[m--];
        return cost;
        }
        if (m < 0) {
            int cost=0;
            while(n>=0)cost+=s1[n--];
            return cost;
        }

        if(dp[n][m]!=-1)return dp[n][m];
        // int pick=0,notpick=0;
        if(s1[n]==s2[m]){
            return dp[n][m]=commonsubseq(n-1,m-1,s1,s2,dp);
        }
         return dp[n][m]=min(s1[n]+commonsubseq(n-1,m,s1,s2,dp),s2[m]+commonsubseq(n,m-1,s1,s2,dp));
    
        }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return commonsubseq(n-1,m-1,s1,s2,dp);
        
    }
};