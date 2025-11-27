class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
       map<int, long long>mp;
       long long cur=0;
       long long res=LLONG_MIN;
       mp[0]=0;
       for(int i=0;i<nums.size();i++){
        cur+=nums[i];
        if(mp.find((i+1)%k)!=mp.end()){
            res=max(res, cur-mp[(i+1)%k]);
            mp[(i+1)%k]=min(mp[(i+1)%k],cur);

        }
        else{
            mp[(i+1)%k]=cur;
        }
       }
       return res;
    }
};