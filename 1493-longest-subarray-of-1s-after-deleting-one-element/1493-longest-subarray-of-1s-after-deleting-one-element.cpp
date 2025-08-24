class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool del=false;
        int len=0,maxlen=-1;
        int left=0,ind=-1;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==1)len++;
            if(nums[right]!=1){
                if(del==false){
                    del=true;
                    // len++;
                }
                else{
                    while(del==true && left<=right){
                        if(nums[left]!=1){
                            del=false; 
                        }
                       else len--;
                        left++;
                    }
                    del=true;
                }
               
            }
             maxlen=max(len,maxlen);
        }
        if(!del)return maxlen-1;
        return maxlen;
    }
};