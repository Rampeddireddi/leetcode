class Solution {
public:
    int findminpair(vector<int>&nums){
        int minp=1e9;
        int pos=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+nums[i+1]<minp){
                minp=nums[i]+nums[i+1];
                pos=i;
            }
        }
        return pos;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int cnt=0;
        while(!is_sorted(nums.begin(),nums.end())){
            int pos=findminpair(nums);
            nums[pos]+=nums[pos+1];
            nums.erase(nums.begin()+pos+1);
            cnt++;
        }
        return cnt;
    }
};