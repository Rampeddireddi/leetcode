class Solution {
public:

   int stashed(int ind, vector<int>nums,vector<int>&dp){
    if(ind ==0)return dp[0]=nums[0];
    if(ind<0)return 0;
    if(dp[ind]!=-1)return dp[ind];
    
    int pick=nums[ind]+stashed(ind-2,nums,dp);
    int notpick=0+stashed(ind-1,nums,dp);
     dp[ind]=max(pick,notpick);
    return dp[ind];
   }

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return stashed(nums.size()-1,nums,dp);
    }
};