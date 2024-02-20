class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int s=0;
        for(int i=0;i<size;i++)
        {
            s+=nums[i];
        }
        int n;
        n=(size*(size+1))/2;
        return n-s;
    }
};