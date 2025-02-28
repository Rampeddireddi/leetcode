class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len=0,i=0,j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]==0){
                k--;
            }
            while(k<0){
                len=max(len,j-i);
                if(nums[i]==0){
                    k++;
                }
                i++;
            }
            
            j++;
        }
        len=max(len,j-i);
        return len;
    }
};