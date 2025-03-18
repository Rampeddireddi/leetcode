class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int bitmask=0;
        int res=1;
        // int len=0;
        int left=0;
        for(int right=0;right<n;right++){
            while((bitmask & nums[right]) !=0){
                bitmask =bitmask^nums[left];
                left++;
            }
            bitmask=bitmask|nums[right];
            res=max(res,right-left+1);
        }
        return res;
    }
};