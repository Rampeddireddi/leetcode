class Solution {
public:
    int findLongestCommonSubsequence(int i, int j, string &text1, string &text2,vector<vector<int>>&dp){
        if(i <0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        // int equal=0,notequal=0;
        if(text1[i]==text2[j]){
           return dp[i][j]=1+findLongestCommonSubsequence(i-1,j-1,text1,text2,dp);
        }
       return dp[i][j]=max(findLongestCommonSubsequence(i-1,j,text1,text2,dp),findLongestCommonSubsequence(i,j-1,text1,text2,dp));
        // return dp[i][j]=max(equal,notequal);
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
       return findLongestCommonSubsequence(text1.size()-1,text2.size()-1,text1,text2,dp);
    }
};