class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0;
        int c = 0;
        int pdct = 1;
        for(int i = 0; i < nums.size(); i++) {
            pdct *= nums[i];
            while(pdct >= k && l <= i) {
                pdct /= nums[l];
                l++;
            }
            c += i - l + 1;
        }
        return c;
    }
};
