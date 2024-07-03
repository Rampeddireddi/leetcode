class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>v;
        // vector<int>k;
        // vector<int>res;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]>0){
        //         v.push_back(nums[i]);
        //     }
        //     else{
        //         k.push_back(nums[i]);
        //     }
        // }
        // int i=0;
        // int i1=0;
        // while(i<v.size() && i1<k.size()){
        //     res.push_back(v[i]);
        //     res.push_back(k[i1]);
        //     i++;
        //     i1++;
        // }
        // return res;

        int p=0,n=1;
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[p]=nums[i];
                p+=2;
            }
            else{
                res[n]=nums[i];
                n+=2;
            }
           
        }
         return res;
            }
};