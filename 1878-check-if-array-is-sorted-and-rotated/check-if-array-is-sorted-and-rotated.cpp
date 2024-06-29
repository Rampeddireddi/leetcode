class Solution {
public:
    bool check(vector<int>& nums) {
        int cir=0;
        int n =nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])cir++;
        }
        if(cir==0)return true;
        if(cir==1 && nums[0]>=nums[n-1])return true;
        return false;
    }
};