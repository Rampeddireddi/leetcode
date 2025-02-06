class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        map<int,int>mp;
        int total=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int prod=nums[i]*nums[j];
                if(mp.find(prod)!=mp.end()){
                    total +=8*(mp[prod]);
                    mp[prod]++;
                }
                else mp[prod]++;
            }
        }
        return total;
    }
};