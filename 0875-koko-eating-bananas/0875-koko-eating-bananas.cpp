class Solution {
public:
    bool isfeasible(int v,int h,vector<int>piles){
        int cnt=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(piles[i]<=v)cnt++;
            else{
                if(piles[i]%v==0)cnt+=piles[i]/v;
                else cnt+=piles[i]/v + 1;
            }
            if(cnt > h)return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    int left=1;
    int right=*max_element(piles.begin(),piles.end());
    while(left<right){
        int mid=left+(right-left)/2;
        if(isfeasible(mid,h,piles)){
            right=mid;
        }
        else left=mid+1;
    }
    return left;
    }
};