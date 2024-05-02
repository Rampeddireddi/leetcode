class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // map<int,int>mp;
       sort(nums.begin(),nums.end(),greater<int>());
    //    for(int i=0;i<nums.size();i++){
    //     mp[nums[i]]++;
    //    } 
    //    for(int i=0;i<nums.size();i++){
    //     int res=-nums[i];
    //     if(mp.find(res)!=mp.end())return abs(res);
    //    }
    //    return -1;
    if(nums[0]<0)return -1;
    int i=0,j=nums.size()-1;
    while(i<j){
        int res=-nums[i];
        if(res==nums[j])return nums[i];
        else if(nums[j]<res){
            while(nums[j]<res)j--;
        }
        else if(nums[j]>res){
            i++;
        }
    }
    return -1;
    }
};