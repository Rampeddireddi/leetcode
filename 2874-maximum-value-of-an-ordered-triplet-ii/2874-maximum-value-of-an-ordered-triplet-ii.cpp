class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long maxval=0,maxdiff=0,maxele=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // cout<<maxdiff*nums[i]<<" ";
            maxval=max(maxval,long(maxdiff*nums[i]));
            maxdiff=max(maxdiff,long(maxele-nums[i]));
            maxele=max(maxele,long(nums[i]));
        }
        return maxval;
    }


    
};