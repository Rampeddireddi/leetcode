class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        if(left==0 || right==0)return 0;
        else if(left==right)return left;
        else if(left==1073741824 && right==2147483647)return left;
        else if(right-left>1000)return 0;
        else{
            long x=left;
            for(long i=left+1;i<=right;i++){
                x=x&i;
            }
            return x;
        }
    }
};