class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        int res=INT_MAX;
        if(n==1)return 0;
        sort(nums.begin(),nums.end());
        // cout<<nums[0]<<" "<<nums[n-1];
        if(1LL*nums[0]*k >=nums[n-1])return 0;
        // for(int left=0;left<n;left++){
        //     for(int right=left+1;right<n;right++){
        //         if(1LL*k*nums[left] < nums[right] ){
        //             break;
        //         }
        //         else res=min(res,left-0+n-right-1);
        //     }
        // }
        int ind;
        for(int i=0;i<n;i++){
         long long val = 1LL*nums[i]*k;
         auto it=upper_bound(nums.begin(),nums.end(),val);
         ind=it-nums.begin();
         res=min(res,n-ind+i-0);
        }
        return res==INT_MAX?n-1:res;
    }
};