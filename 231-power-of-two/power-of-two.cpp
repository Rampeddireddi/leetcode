class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        if(n<0){
            return false;
        }
        while(n)
        {
         n=n&(n-1);
         c+=1;
        }
        if(c==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};