class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k!=0){
        int n =nums.size();        
        vector<int>  temp;
        int d = k % n;
        for(int i=n-d;i<n;i++)temp.push_back(nums[i]);
        for(int i=n-d-1;i>=0;i--){
            nums[i+d]=nums[i];
        }
        for(int i=0;i<d;i++){
            nums[i]=temp[i];
        }
    }
    }
};