class Solution {
public:
  bool isFeasible(long long val, vector<int>ranks, int cars){
long long cnt=0;
int n=ranks.size();
for(int i=0;i<n;i++){
    cnt+=floor(sqrt(val/ranks[i]));
}
if(cnt>=cars)return true;
return false;
  }
    long long repairCars(vector<int>& ranks, int cars) {
     long long left=1,right=1e14;
     long long mid=-1;
     while(left<right){
        mid = left+(right-left)/2;
        if(isFeasible(mid,ranks,cars))right=mid;
        else left=mid+1;
     }
     return left;
    }
};