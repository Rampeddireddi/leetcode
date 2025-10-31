class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>res;
        for(const int i:nums){
            mp[i]++;
            if(mp[i]==2)res.push_back(i);
        }
        return res;
    }
};