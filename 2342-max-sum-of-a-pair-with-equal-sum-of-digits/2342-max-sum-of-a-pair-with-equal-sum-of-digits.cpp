class Solution {
public:
    int findSum(int n){
        int res=0;
        while(n>0){
        res+=n%10;
        n=n/10;
        }
        return res;
    }
    int maximumSum(vector<int>& nums) {
        map<int,vector<int>>mp;
        int n= nums.size();
        for(int i=0;i<n;i++){
             int sumV = findSum(nums[i]);
             mp[sumV].push_back(nums[i]);
        }
        int maxi=-1;
        for(auto i: mp){
            int len =i.second.size(); 
            if(len==2){
                int su=0;
                for(int j=0;j<2;j++){
                    su+=i.second[j];
                }
                maxi =max(maxi,su);
            }
        }
        return maxi;
    }
};