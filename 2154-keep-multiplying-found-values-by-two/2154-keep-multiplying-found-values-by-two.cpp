class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int res=original;
        sort(nums.begin(),nums.end());
        for(int i:nums){
            if(i==res){
                res*=2;
            }
        }
        return res;

    }
};