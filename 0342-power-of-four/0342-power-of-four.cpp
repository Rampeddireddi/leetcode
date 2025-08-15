class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        if((n&(n-1)))return false;
        int cnt=floor(log2(n))+1;
        return cnt&1;
    }
};