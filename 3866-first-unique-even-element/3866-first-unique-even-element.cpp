class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int,int>mp;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){mp[nums[i]]++;
            vec.push_back(nums[i]);
            }
    }
    for(int i:vec){
        if(mp[i]==1)return i;
    }
    return -1;
    }
};