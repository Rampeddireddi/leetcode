class Solution {
public:
    void subsetgenerations(int i, vector<int>&nums, int n, int &sum,int sub){
        if(i==n){
            sum+=sub;
            return;
        }
        subsetgenerations(i+1,nums,n,sum,sub^nums[i]);
        subsetgenerations(i+1,nums,n,sum,sub);
    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        subsetgenerations(0,nums,n,sum,0);
        return sum;
    }
};