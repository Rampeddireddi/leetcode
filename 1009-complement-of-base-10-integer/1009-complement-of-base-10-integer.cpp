class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        bitset<32>a(n);
        int res=0,len=0;
        int temp=n;
        while(temp){
            temp=temp>>1;
            len++;
        }
        for(int i=0;i<len;i++){
            a[i]=a[i]^1;
           }
        res=a.to_ulong();
        return res;
    }
};