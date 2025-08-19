class Solution {
public:
int lcs(int ind1,int ind2, string &word1, string &word2, vector<vector<int>>&dp){
if(ind1<0 || ind2<0)return 0;
if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
if(word1[ind1]==word2[ind2]){
    return dp[ind1][ind2]=1+lcs(ind1-1,ind2-1,word1,word2,dp);
}
return dp[ind1][ind2]=max(lcs(ind1-1,ind2,word1,word2,dp),lcs(ind1,ind2-1,word1,word2,dp));
}
    int minDistance(string word1, string word2) {

        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
        return word1.size()+word2.size()-2*(lcs(word1.size()-1,word2.size()-1,word1,word2,dp));
    }
};