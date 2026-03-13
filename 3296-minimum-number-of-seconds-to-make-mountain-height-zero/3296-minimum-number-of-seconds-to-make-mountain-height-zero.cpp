class Solution {
public:
    typedef long long ll;

    bool isPossible(long long mid, int height, vector<int>&times){
    int h=height;
for(int i=0;i<times.size();i++){
   long long k =mid/times[i];
    long long x=(-1+sqrt(1 +8*k))/2;
    h-=x;
}
    return h<=0;

    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        if(workerTimes.size()==1) {
            ll res=(1ll* mountainHeight*(mountainHeight+1))/2;
            return res*workerTimes[0];
        }
        ll left=*min_element(workerTimes.begin(),workerTimes.end());
        ll right=*max_element(workerTimes.begin(),workerTimes.end());
        right=right*(1ll*mountainHeight*(mountainHeight+1))/2;
        while(left<right){
            ll mid=left+(right-left)/2;
            if(isPossible(mid,mountainHeight,workerTimes)){
                right=mid;
            }
            else left=mid+1;
        }
        return left;
    }
};