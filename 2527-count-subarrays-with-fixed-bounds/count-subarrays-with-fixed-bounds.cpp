class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minindex=-1,maxindex=-1,badindex=-1;
        long res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxK || nums[i]<minK)badindex=i;
            if(nums[i]==minK)minindex=i;
            if(nums[i]==maxK)maxindex=i;
            res+=max(0,min(minindex,maxindex)-badindex);
        }
    return res;
    }


};