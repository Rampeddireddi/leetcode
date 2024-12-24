class Solution {
public:
    vector<vector<int>>res;
    void ram(int start, int end, vector<int>nums)
    {
        if(start==end){
            res.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(nums[start],nums[i]);
            ram(start+1,end,nums);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        ram(0,n-1,nums);
        return res;

    }
};