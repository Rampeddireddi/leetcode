class Solution {
public:
    int midnightmotivation(int n,vector<int>&nums,vector<int>&dp){
        if(n==0)return nums[0];
        if(n==1)return max(nums[1],nums[0]);
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+midnightmotivation(n-2,nums,dp);
        int notpick=midnightmotivation(n-1,nums,dp);
        dp[n]=max(pick,notpick);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
    return midnightmotivation(nums.size()-1,nums,dp);
    }
};