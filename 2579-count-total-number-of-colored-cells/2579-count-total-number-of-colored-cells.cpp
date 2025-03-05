class Solution {
public:
    long long coloredCells(int n) {
        long res=1;
        int add=4;
        n--;
        while(n!=0){
            res+=add;
            add+=4;
            n--;
        }
        return res;
    }
};