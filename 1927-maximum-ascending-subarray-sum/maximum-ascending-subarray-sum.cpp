class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int n=nums.size();
       int sum=0,maxSum=nums[0];
       sum+=nums[0];
       for(int i=1;i<n;i++){
        if(nums[i-1]<nums[i])sum+=nums[i];
        
       else sum=nums[i];
       maxSum = max(maxSum,sum);
       }
       return maxSum;
    }
};