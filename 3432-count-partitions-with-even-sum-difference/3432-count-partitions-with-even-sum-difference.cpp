class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        int res=0,cursum=0;
        for(int i: nums)sum+=i;
        for(int i=0;i<nums.size()-1;i++){
            cursum+=nums[i];
            cout<<cursum<<" ";
            if(abs(cursum-(sum-cursum))%2==0)res++;
        }
        return res;
    }
};