class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr=prices[0];
        int res=0;
        for(int i=0;i<prices.size();i++){
            if(curr<prices[i]){
                res+=prices[i]-curr;
                curr=prices[i];
            }
            else{
                curr=prices[i];
            }

        }

        return res;
    }
};