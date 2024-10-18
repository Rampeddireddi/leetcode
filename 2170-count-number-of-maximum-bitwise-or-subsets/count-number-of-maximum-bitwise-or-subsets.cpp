class Solution {
public:
   void backtrack(const vector<int> &nums, int index, int currentOR, int maxOR, int &count)
    {
        if (index == nums.size()) {
            if (currentOR == maxOR) {
                count++;
            }
            return;
        }
        backtrack(nums, index + 1, currentOR | nums[index], maxOR, count);
        backtrack(nums, index + 1, currentOR, maxOR, count);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxr=0;
        for(int num : nums){
            maxr |= num;
        }
        int cnt=0;
        backtrack(nums,0,0,maxr,cnt);
        return cnt;
    }
};