class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int left=0;
        long long cnt=0;

        for(int i=0;i<prices.size();i++){
            if(i==0)cnt=1;
            else{
                if(prices[i]+1==prices[i-1]){
                    cnt+=(i-left)+1;
                }
                else{
                    left=i;
                    cnt+=(i-left)+1;
                }
            }
        }
        return cnt;
    }
};