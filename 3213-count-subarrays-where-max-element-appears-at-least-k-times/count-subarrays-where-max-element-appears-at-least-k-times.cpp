// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int k) {
//         int i=0,j=0;
//         int maxE=*max_element(nums.begin(),nums.end());
//         long long ans=0;
//         int maxCount=0;
//         while(j<nums.size()){
//             if(nums[j]==maxE) maxCount++;
//             while(maxCount>=k){
//                 ans+=nums.size()-j;
//                 if(nums[i]==maxE) maxCount--;
//                 i++;
//             }
//             j++;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l=0,len=nums.size();
        long long cnt=0;
        int m=*max_element(nums.begin(),nums.end());
        int r=0;
   
        for(int i=0;i<len;i++){
            if(nums[i]==m)r++;

            if(r>=k){
             
                while(r>=k){
                    if(nums[l]==m)r--;
                    l++;
                    cnt+=len-i;
                }
               
            }
        }
        return cnt;
    }
};