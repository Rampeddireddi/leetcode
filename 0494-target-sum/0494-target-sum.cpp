class Solution {
public:
    int posNegways(int ind, int target, vector<int>&nums,map<pair<int,int>,int>&dp){
        if(ind<0){
            if(target==0)return 1;
            // if(target==0 && nums[ind]==0)return 2;
            return 0;
        }
        if(dp.find({ind,target})!=dp.end())return dp[{ind,target}];
        int neg=posNegways(ind-1,target-nums[ind],nums,dp);
        int pos=posNegways(ind -1,target+nums[ind],nums,dp);
        return dp[{ind,target}]=neg+pos;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
       map<pair<int,int>,int>dp;
       return posNegways(nums.size()-1,target,nums,dp);

        //   return cnt;
    }
};