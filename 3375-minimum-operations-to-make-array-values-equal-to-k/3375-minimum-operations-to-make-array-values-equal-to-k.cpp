class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int distinct=0;
        set<int>s(nums.begin(),nums.end());
        for(int num:s){
            if(num<k)return -1;
            if(num!=k)distinct++;
        }
        return distinct;
    }
};