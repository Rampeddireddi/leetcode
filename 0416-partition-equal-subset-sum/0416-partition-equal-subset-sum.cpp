class Solution {
public:
    bool aggipettivunda(int n, vector<int>&nums, int target,vector<vector<int>>&dp){
        if(target==0)return true;
        if(n==0)return nums[0]==target;
        if(dp[n][target]!=-1)return dp[n][target];
        bool vaddusodhara=aggipettivunda(n-1,nums,target,dp);
        bool tisuko=false;
        if(nums[n]<=target){
            tisuko=aggipettivunda(n-1,nums,target-nums[n],dp);
        }
        return dp[n][target] = vaddusodhara||tisuko;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto &i:nums)sum+=i;
        if(sum%2!=0)return false;
        int target=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
       return aggipettivunda(n-1,nums,target,dp);
    }
};