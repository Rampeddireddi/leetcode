class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        return mini+maxi;
    }
};