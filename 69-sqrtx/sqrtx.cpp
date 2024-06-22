class Solution {
public:
    int mySqrt(int x) {
    long int l=(long)0,r=(long)x+1;
       while(l<r){
        long mid=l+(r-l)/2;
        if(mid*mid > x)r=mid;
        else l=mid+1;

       }
       return l-1; 
    }
};