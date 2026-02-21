class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        set<int>primes={2,3,5,7,11,13,17,19,23,29,31};
        int res=0;
        for(int i=left;i<=right;i++){
            int num=i;
            int cnt=0;
            while(num>0){
                cnt=(num&1)?cnt+1:cnt+0;
                num=num>>1;
            }
            if(primes.find(cnt)!=primes.end())res++;
        }
        return res;
    }
};