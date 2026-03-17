class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            // long long val=1ll*k*nums[i];
            auto it=upper_bound(nums.begin(),nums.end(),1ll*k*nums[i]);
            int pos=it-nums.begin();
            res=min(res,(int)(i-0+nums.size()-pos));
        }
        return res;
    }
};