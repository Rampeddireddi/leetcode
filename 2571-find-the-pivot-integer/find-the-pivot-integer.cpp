class Solution {
public:
    int pivotInteger(int n) {
        int fsum=0;
        int bsum=0;
        for(int i=n;i>=1;i--){
            fsum+=i;
          bsum=(i*(i+1))/2;
            if(fsum==bsum)return i; 

        }
        return -1;
    }
};