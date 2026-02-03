class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=1,n=nums.size(),cnt=0;
        bool bit=false;
        while(i<n && nums[i]>nums[i-1]){
            // cout<<i<<endl;
            i++;
            bit=true;
            // cnt++;
        }
        if(bit){
            cnt++;
            bit=false;
        }
        while(i<n && nums[i]<nums[i-1]){
            i++;
        // cout<<i<<endl;
        // cnt++;
        bit=true;
        }
        if(bit){
            cnt++;
            bit=false;
        }

        while(i<n && nums[i]>nums[i-1]){i++;
        // cout<<i<<endl;
        // cnt++;
        bit=true;
        }
        if(bit){
            cnt++;
        }
       cout<<i<<endl<<cnt;
        return i==n&&cnt==3;
    }
};