class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int s=0;
        int len=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)s-=1;
            else s+=1;
            if(s==0)len=i+1;
            else if(mp.find(s)!=mp.end()){
                len=max(len,i-mp[s]);
            }
            else mp[s]=i;
        }
        return len;
    }
};