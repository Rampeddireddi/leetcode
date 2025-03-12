class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
         int pos=0,neg=0;
        int i=0,j=n-1;
        int mid=0;
        while(i<j){
            mid=i+(j-i)/2;
            if(nums[mid]>=0)j=mid;
            else i=mid+1;
        }
        neg=i;

        int left=0,right=n-1;
        while(left<right){
            mid=left+(right-left)/2;
            if(nums[mid]>0)right=mid;
            else left=mid+1;
        }
        pos=n-left;
        // return 0;
        return max(neg,pos);
    }
};