class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int i=0;
     int sum=0;
     int cnt=0;
    //  if(sum==k)cnt+=1;
      map<int,int>mp;
      mp[0]=1;
    while(i<nums.size()){
        sum+=nums[i];
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            cnt+=mp[rem];
        }
        mp[sum]+=1;
        i++;
        
    }
    return cnt;
    }
};