class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }

        int prev=INT_MIN;
        int cnt=0,len=0,maxle=0;
        for(auto i:mp){
            // if(cnt==0)continue;
            if(i.first -1 == prev || prev==INT_MIN)len++;
            else len=1;
            prev=i.first;
            maxle=max(len,maxle);
        }
        return maxle;
    }
};