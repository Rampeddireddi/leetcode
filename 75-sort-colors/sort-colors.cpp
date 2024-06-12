class Solution {
public:
    void sortColors(vector<int>& nums) {
//   int i=0;
//   int j=nums.size()-1;
//   while(i<j)
//   {
//       if(nums[i]>nums[j])
//       {
//           int temp=nums[i];
//           nums[i]=nums[j];
//           nums[j]=temp;
//       }
//       j-=1;
//   }
sort(nums.begin(),nums.end());

    }
};