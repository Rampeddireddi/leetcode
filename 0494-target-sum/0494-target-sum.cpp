class Solution {
public:
    int heybro(int ind,int tar, vector<int>&nums, vector<vector<int>>&dp){
           if (ind == 0) {
        if (tar == 0 && nums[0] == 0)
            return 2; 
        if (tar == 0 || tar == nums[0])
            return 1;
        return 0; 
    };
            if(dp[ind][tar]!=-1)return dp[ind][tar];
           int embabu_laddu_vadha=heybro(ind-1,tar,nums,dp);
           int laddu_kavala=0;
           if(nums[ind]<=tar){
            laddu_kavala=heybro(ind-1, tar-nums[ind],nums,dp);
           }
           return dp[ind][tar]=(embabu_laddu_vadha + laddu_kavala);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
      int n=nums.size();
        int sum=0,cnt=0;
        for(auto &i: nums)sum+=i;
        // cout<<sum;
        if(target>sum)return 0;
        if((sum-target) % 2 !=0 || sum-target<0)return 0;
        int tar=(sum-target)/2;

      vector<vector<int>>dp(n,vector<int>(tar+1,-1));
    return  heybro(n-1,tar,nums,dp);
    
    //   return cnt;
    }
};