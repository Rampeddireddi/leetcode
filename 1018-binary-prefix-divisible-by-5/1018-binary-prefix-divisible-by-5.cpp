class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        long long x=0,val=0;
        vector<bool>res;
        for(int i=0;i<nums.size();i++)
        {
            x=2*x + nums[i];
            if(x%5 ==0)res.push_back(true);
            else res.push_back(false);
            x=x%5;
        }
        return res;
    }
};