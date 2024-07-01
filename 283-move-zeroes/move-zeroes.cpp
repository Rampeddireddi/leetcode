class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int k=-1,j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){k=i;
        break;}
    }
    if(k!=-1){
    for(int i=k+1;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[k]);
            k++;
        }
    }
    }
    }

};