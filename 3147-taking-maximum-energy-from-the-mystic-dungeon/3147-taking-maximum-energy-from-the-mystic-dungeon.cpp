class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
       vector<int>dp=energy;
       for(int i=n-1;i>=0;i--){
        dp[i]+=(i+k < n)?dp[i+k]:0;
       }
       return *max_element(dp.begin(),dp.end());
    }
};