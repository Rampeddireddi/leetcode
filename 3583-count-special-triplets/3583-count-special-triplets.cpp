class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int mod=1e9+7;
        map<int,int>mp1,mp2;
        int n=nums.size();
        vector<int>left(n,0),right(n,0);
        for(int i=0;i<n;i++){
            if(mp1.count(nums[i]*2)){
                left[i]=mp1[nums[i]*2];
            }
            mp1[nums[i]]++;
        }
        for(int i=n-1;i>=0;i--){
            if(mp2.count(nums[i]*2)){
                right[i]=mp2[nums[i]*2];
                // cout<<nums[i]<<" = "<<mp2[nums[i]*2]<<endl;
            }

            mp2[nums[i]]++;
            // cout<<nums[i]<<" = "<<mp2[nums[i]]<<endl;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt=(cnt%mod)+(1LL*left[i]*right[i])%mod;
        }
        return cnt;
    }
};