class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp;
       sort(nums.begin(),nums.end(),greater<int>());
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       } 
       for(int i=0;i<nums.size();i++){
        int res=-nums[i];
        if(mp.find(res)!=mp.end())return abs(res);
       }
       return -1;
    }
};