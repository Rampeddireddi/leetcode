class Solution {
public:
    int numSub(string s) {
        int cnt=0,res=0;
        for(char i: s){
            if(i=='1')cnt++;
            else{
                res+=cnt*(cnt+1)/2;
                cnt=0;
            }
        }
        if(cnt!=0)res+=cnt*(cnt+1)/2;
        return res;
    }
};