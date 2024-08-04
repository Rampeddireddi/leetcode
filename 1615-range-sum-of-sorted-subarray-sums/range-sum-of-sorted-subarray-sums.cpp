class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        long long sum=0;
        vector<int>res;
      for(int i=0;i<nums.size();i++){
        sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
        res.push_back(sum);      
        }
      }
      long long newsum=0;
      sort(res.begin(),res.end());
      for(int i=left-1;i<right;i++){
        newsum+=res[i];
      }  
     long long mod=pow(10,9)+7;
      return newsum%mod;
    }
};