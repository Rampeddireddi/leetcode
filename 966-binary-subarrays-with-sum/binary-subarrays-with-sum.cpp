class Solution {
public:
    int ram(vector<int>nums,int goal)
    {
        int i=0,j=0,s=0,c=0;
        if(goal<0)
        {
            return 0;
        }
        while(j<nums.size())
        {
            s+=nums[j];
            while(s>goal)
            {
                s-=nums[i];
                i++;
            }
            c+=(j-i+1);
            j++;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return ram(nums,goal)-ram(nums,goal-1);
    }
};